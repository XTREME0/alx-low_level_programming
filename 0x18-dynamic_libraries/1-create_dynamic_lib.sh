#!/bin/bash
gcc *.c -c -fPIC
gcc main.h -shared -o liball.so
