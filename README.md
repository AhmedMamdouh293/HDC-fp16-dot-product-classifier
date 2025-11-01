# HDC-fp16-dot-product-classifier
This project simulates a hardware Hyperdimensional Computing (HDC) dot-product classifier using Verilator and a C++ testbench.
The top-level SystemVerilog module (top.sv) is compiled by Verilator, and the C++ testbench (sim_main.cpp) drives the simulation — feeding class weights (fp16), encoded input samples, and handling control signals (like start, next_cent, and next_class).

The testbench is designed for a multi-core, Processing-in-Memory-style HDC architecture, where:

Each PE (Processing Element) processes a partition of the hypervector dimensions read from the memory banks.

Class weights are loaded and streamed in wide bus chunks.

The testbench supports multi-class classification and automated pass/fail result checking.


# Directory
project_root/
│
├──top/
|   └──hdc_test_data/           # Memory input files for simulation
|   |  └── sample.mem           # Input sample hypervectors (hex)
|   |  └── label.mem            # Ground truth class labels (decimal)
|   |  └── class_weights.mem    # Class weights (16-bit hex per line)
|   |
|   └──obj_dir/                 # Verilator build output (generated automatically)
|   |  └── Vtop.*               # Generated Verilated model of your top module  
|   |              
|   ├── top.sv                  # Top-level module
|   ├── sim_main.cpp            # Main C++ testbench logic 
|   ├── testbench.h             # Generic Verilator testbench helper
|   └── top.debug               # Output file
|
|── hdc.ipynb                   # python code of the HDC model used to generate the test data.       
└── README.md                   # (This file)    

# To build the Verilated model
run:
```
verilator --trace --cc top.sv --top-module top --exe -build sim_main.cpp
```

# To run the simulation
Run the compiled binary:
```
obj_dir/Vtop > top.debug
```
This will gernerate the "top.debug" output file and the waveform file "top_wave.vcd"

# To open the waveforms in GTKWave
Run:
```
gtkwave top_wave.vcd
```
