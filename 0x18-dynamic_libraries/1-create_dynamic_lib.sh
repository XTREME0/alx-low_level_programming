#!/bin/bash
gcc *.c -c -fPIC
gcc main.o -shared -o liball.so
