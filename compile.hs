#!/bin/sh
export PKG_CONFIG_PATH=/opt/ffmpeg/lib/pkgconfig
rm *.o test &> /dev/null
gcc `pkg-config --cflags libavformat` -c test.c -o test.o
gcc `pkg-config --libs libavformat` test.o -o test