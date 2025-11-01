// Author: Ahmed Mamdouh
// sim_main.cpp
#include <verilated.h>
#include <vector>
#include <array>
#include <fstream>
#include <iostream>
#include <string>
#include <cstdint>
#include <stdexcept>
#include <cstring>
#include "obj_dir/Vtop.h"
#include "testbench.h"


// =======================================================
// Helper: Read mem file (hex or decimal)
// =======================================================
template<typename T>
std::vector<T> read_mem_file(const std::string &filename, bool hex = true) {
    std::ifstream f(filename);
    if (!f.is_open()) throw std::runtime_error("Cannot open " + filename);

    std::vector<T> data;
    std::string line;
    while (std::getline(f, line)) {
        auto start = line.find_first_not_of(" \t\r\n");
        if (start == std::string::npos) continue;
        auto end = line.find_last_not_of(" \t\r\n");
        std::string token = line.substr(start, end - start + 1);
        if (token.empty()) continue;

        T val = static_cast<T>(std::stoull(token, nullptr, hex ? 16 : 10));
        data.push_back(val);
    }
    return data;
}

// =======================================================
// Read class weights (one 16-bit hex per line)
// =======================================================
std::vector<uint16_t> read_weights_file(const std::string &filename) {
    std::ifstream file(filename);
    if (!file.is_open()) throw std::runtime_error("Cannot open " + filename);

    std::vector<uint16_t> weights;
    std::string line;
    while (std::getline(file, line)) {
        auto start = line.find_first_not_of(" \t\r\n");
        if (start == std::string::npos) continue;
        auto end = line.find_last_not_of(" \t\r\n");
        std::string token = line.substr(start, end - start + 1);
        if (token.empty()) continue;
        uint16_t value = static_cast<uint16_t>(std::stoul(token, nullptr, 16));
        weights.push_back(value);
    }
    return weights;
}

// =======================================================
// Read wide sample (one WIDTH-bit vector per line)
// returns vector of arrays of 32-bit words (LSB word at index 0)
// WIDTH must be multiple of 32
// =======================================================
template<int WIDTH>
std::vector<std::array<uint32_t, WIDTH / 32>> read_wide_sample(const std::string &filename) {
    static_assert(WIDTH % 32 == 0, "WIDTH must be multiple of 32");
    constexpr int WORDS = WIDTH / 32;
    constexpr int HEX_DIGITS = WIDTH / 4;

    std::ifstream f(filename);
    if (!f.is_open()) throw std::runtime_error("Cannot open " + filename);

    std::vector<std::array<uint32_t, WORDS>> data;
    std::string line;
    while (std::getline(f, line)) {
        auto start = line.find_first_not_of(" \t\r\n");
        if (start == std::string::npos) continue;
        auto end = line.find_last_not_of(" \t\r\n");
        std::string token = line.substr(start, end - start + 1);
        if (token.empty()) continue;

        // remove optional 0x
        if (token.size() >= 2 && token[0] == '0' && (token[1] == 'x' || token[1] == 'X'))
            token = token.substr(2);

        // pad/truncate to width hex digits
        if ((int)token.size() < HEX_DIGITS) token = std::string(HEX_DIGITS - token.size(), '0') + token;
        else if ((int)token.size() > HEX_DIGITS) token = token.substr(token.size() - HEX_DIGITS);

        std::array<uint32_t, WORDS> words{};
        for (int i = 0; i < WORDS; ++i) {
            int pos = HEX_DIGITS - (i + 1) * 8; // take 8 hex chars per 32-bit word
            std::string chunk = token.substr(pos, 8);
            words[i] = static_cast<uint32_t>(std::stoull(chunk, nullptr, 16));
        }
        data.push_back(words);
    }
    return data;
}

// =======================================================
// Pack class weights into WIDTH-bit chunk for DUT (per PE, wide bus)
// =======================================================
template<int WIDTH>
std::array<uint32_t, WIDTH/32> pack_class_chunk_for_pe(
    const std::vector<uint16_t> &weights, // [NUM_C * D] flattened
    int NUM_C, int D, int CENT_W, int BUS_W,
    int class_idx, int chunk_idx, int NUM_PES)
{
    static_assert(WIDTH % 32 == 0, "WIDTH must be multiple of 32");
    constexpr int WORDS = WIDTH / 32;

    std::array<uint32_t, WORDS> out{};
    out.fill(0u);

    // D partitioned among PEs (e.g., 1024 / 4 = 256 weights per PE)
    const int PE_D = D / NUM_PES;
    const int class_base = class_idx * D;
    // How many weights fit in a single PE's slice of the bus (e.g., 256 / 16 = 16)
    const int weights_per_pe_slice = BUS_W / CENT_W;

    // Iterate through each Processing Element to build its slice of the bus
    for (int pe = 0; pe < NUM_PES; ++pe) {
        // Calculate the base index for this PE's master block of weights
        // e.g., PE1 starts at index 256, PE2 at 512, etc.
        const int pe_weight_base = class_base + pe * PE_D;
        
        // Calculate the starting bit position for this PE's slice on the main bus
        // e.g., PE0@bit 0, PE1@bit 256, PE2@bit 512, etc.
        const int pe_bus_bit_base = pe * BUS_W;

        // Iterate through the 'weights_per_pe_slice' (e.g., 16) weights for this transaction
        for (int i = 0; i < weights_per_pe_slice; ++i) {
            // The offset for the current weight inside the PE's master block
            // e.g., for transaction 0 (chunk_idx=0), this is i = 0..15
            // e.g., for transaction 1 (chunk_idx=1), this is 16+i = 16..31
            int local_offset = (chunk_idx * weights_per_pe_slice) + i;

            if (local_offset >= PE_D) continue; // PE has no more weights

            // Get the final global weight index from the flattened source array
            int widx = pe_weight_base + local_offset;
            if (widx >= (int)weights.size()) continue;

            uint32_t w = weights[widx];

            // Calculate the final absolute bit position on the 1024-bit bus
            int bitpos = pe_bus_bit_base + (i * CENT_W);
            int word   = bitpos / 32;
            int offset = bitpos % 32;

            // Pack the weight into the correct 32-bit word
            if (word < WORDS) {
                out[word] |= (w << offset);
                // Handle cases where a weight crosses a 32-bit boundary
                if (offset + CENT_W > 32 && word + 1 < WORDS) {
                    out[word + 1] |= (w >> (32 - offset));
                }
            }
        }
    }

    return out;
}



// =======================================================
// Testbench wrapper
// =======================================================
class TOPLEVEL_TB : public TESTBENCH<Vtop> {
public:
    void tick() { TESTBENCH<Vtop>::tick(); }
};

// =======================================================
// Main
// =======================================================
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    TOPLEVEL_TB *tb = new TOPLEVEL_TB;
    tb->opentrace("top_wave.vcd");

    const int D = 8192;
    const int WIDTH = 8192;
    const int BUS_W = 256;
    const int CENT_W = 16;
    const int NUM_C = 10;
    const int NUM_SAMPLES = 10000;
    const int NUM_PES = D / BUS_W;
    const int WORDS = WIDTH / 32;

    // Calculate the number of transactions needed for one class
    // (Total weights per PE) / (Weights per PE per transaction)
    const int TRANSACTIONS_PER_CLASS = (D / NUM_PES) / (BUS_W / CENT_W);

    // file loading
    auto samples = read_wide_sample<WIDTH>("hdc_test_data/sample.mem");
    auto labels  = read_mem_file<uint32_t>("hdc_test_data/label.mem", false);
    auto weights = read_weights_file("hdc_test_data/class_weights.mem");

    if ((int)weights.size() != NUM_C * D) {
        std::cerr << "ERROR: weights file length (" << weights.size()
                  << ") != NUM_C * D (" << NUM_C * D << ")\n";
        return 1;
    }

    tb->reset();

    int pass_count = 0, fail_count = 0;

    for (int s = 0; s < NUM_SAMPLES; ++s) {
        std::cout << "===================================\n";
        std::cout << "Sample " << s << " expected label = " << labels[s] << std::endl;

        int class_idx = 0;
        int transaction_idx = 0;

        // Pass BUS_W to the packing function
        auto class_chunk_words = pack_class_chunk_for_pe<WIDTH>(weights, NUM_C, D, CENT_W, BUS_W, class_idx, transaction_idx, NUM_PES);

        std::memcpy(tb->m_topsim->in_hv, samples[s].data(), WORDS * sizeof(uint32_t));
        std::memcpy(tb->m_topsim->class_hv, class_chunk_words.data(), WORDS * sizeof(uint32_t));
        tb->m_topsim->class_L = class_idx;

        tb->m_topsim->start = 1;
        tb->tick();
        tb->m_topsim->start = 0;
        transaction_idx++;

        while (!tb->m_topsim->done) {
            tb->tick();

            if (tb->m_topsim->next_cent) {
                if (transaction_idx < TRANSACTIONS_PER_CLASS) {
                    // Pass BUS_W to the packing function
                    auto next_chunk = pack_class_chunk_for_pe<WIDTH>(weights, NUM_C, D, CENT_W, BUS_W, class_idx, transaction_idx, NUM_PES);
                    std::memcpy(tb->m_topsim->class_hv, next_chunk.data(), WORDS * sizeof(uint32_t));
                    tb->m_topsim->class_L = class_idx;
                    transaction_idx++;
                } else {
                    std::memset(tb->m_topsim->class_hv, 0, WORDS * sizeof(uint32_t));
                }
            }

            if (tb->m_topsim->next_class_o) {
                class_idx = (class_idx + 1) % NUM_C;
                transaction_idx = 0;
                // Pass BUS_W to the packing function
                auto nxt = pack_class_chunk_for_pe<WIDTH>(weights, NUM_C, D, CENT_W, BUS_W, class_idx, 0, NUM_PES);
                std::memcpy(tb->m_topsim->class_hv, nxt.data(), WORDS * sizeof(uint32_t));
                tb->m_topsim->class_L = class_idx;
                transaction_idx = 1;
            }
        }

        uint32_t dut_pred = (uint32_t)tb->m_topsim->pred_label;
        std::cout << "DUT predicted = " << dut_pred << std::endl;

        if (dut_pred == labels[s]) { std::cout << "[PASS]\n"; ++pass_count; }
        else { std::cout << "[FAIL]\n"; ++fail_count; }

        do { tb->tick(); } while (tb->m_topsim->done);
    }

    std::cout << "===================================\n";
    std::cout << "Finished: " << pass_count << " passed, " << fail_count << " failed\n";

    tb->closetrace();
    delete tb;
    return 0;
}