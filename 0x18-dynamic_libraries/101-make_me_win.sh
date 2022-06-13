#!/bin/bash
wget https://github.com/baye94/alx-low_level_programming/blob/master/0x18-dynamic_libraries/inject.so -P ../
export LD_PRELOAD="$PWD/../inject.so"
