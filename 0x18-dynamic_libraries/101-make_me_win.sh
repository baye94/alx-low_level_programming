#!/bin/bash
wget -P  https://github.com/baye94/alx-low_level_programming/blob/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD =./tmp/nrandom.so