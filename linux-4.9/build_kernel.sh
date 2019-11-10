#!/bin/bash

make sun8iw7p1_mainline_defconfig
make uImage LOADADDR=0x40008000 -j16
