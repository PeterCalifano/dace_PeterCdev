#!bin/bash
# Build dace and install
mkdir build && cd build 
cmake ..
make 
sudo make install
# Build ALL examples in dacelib
cd ../Tutorials/Tutorial1
mkdir build && cd build && cmake ..
make 
cd ../../Tutorial2
mkdir build && cd build && cmake ..
make
cd ../../..

