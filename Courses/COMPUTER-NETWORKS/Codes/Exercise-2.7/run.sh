#!/bin/sh

# help
# ./run a

# gcc a.c -o a && ./a
gcc $1.c -o $1 && ./$1