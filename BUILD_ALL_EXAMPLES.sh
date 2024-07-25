#!bin/bash
# Build dace and install library, updated by PC, 01-07-2024
cmake -B build -S . 
make -C ./build
cd build 
sudo make install
cd ..

# Build ALL examples in dacelib
# Tutorial set 1
cmake -B /Tutorials/Tutorial1/build -S /Tutorials/Tutorial1
make -C /Tutorials/Tutorial1/build

# Tutorial set 2
cmake -B /Tutorials/Tutorial2/build -S /Tutorials/Tutorial2
make -C /Tutorials/Tutorial2/build

