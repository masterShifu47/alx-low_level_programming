#!/bin/bash

# Compile each .c file into object files
gcc -c *.c

# Create the static library
ar rcs liball.a *.o

# Clean up by removing the object files
rm *.o

