#!/bin/bash

c_files = $(ls *.c)

for c_file in $c_files; do
  gcc -c $c_file
done

ar cr liball.a *.o

rm *.o
