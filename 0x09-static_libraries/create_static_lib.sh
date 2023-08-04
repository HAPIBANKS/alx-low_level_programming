#!/bin/sh

echo "Creating static library..."
c_files=$(ls *.c)

for c_file in $c_files;
do
  echo "Compiling $c_file..."
  gcc -c $c_file
done
ar cr liball.a *.o
rm *.o
echo "Static library created!"
