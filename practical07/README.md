# Practical 7 Code

This practical involves two pieces of code. The first uses a Taylor series to approximate the value of the mathematical function $e$. The user inputs the order of the polynomial and the code calculates a value for $e$ and compares it with the real value of $e$.

The second piece of code involves basic C pointers and dynamic memory allocation. It uses functions which allocate memory for an array, fills the array with ones, prints the array, and then frees back up the memory.

## How to compile:

The code is compiled using the following lines:

* gcc -o E e.c -lm

* gcc -o Pointers pointers.c

## How to execute:

The code is executed using the following lines:

* ./E

* ./Pointers

## Output

* The e.c code will output the estimated value of $e$ based on the length of the polynomial which is inputted. It will also compare this value to the real value of $e$.

* The pointers.c code will output an array of "1's" based on the value of the "size" variable within the code
