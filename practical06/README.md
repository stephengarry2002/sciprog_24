# Practical 6
This folder contains the source code for practical 5. This practical includes a code multiplies two matricies and gives and output matrix as a result. The first (matmult.c) file does this a single .c file. While the second and third files seperate the main (main.c) and function (mm.c) and are combined together when compiling.

## How to compile
The following lines of code are used to comipile its respective file:

* gcc -o MatMult matmult.c

* gcc -c main.c

* gcc -c mm.c

* gcc -o MatMultJoined main.o mm.o

## How to execute
The following lines of code are used to execute each code:

* ./MatMult

* ./MatmultJoined

## Outputs
Both codes will give the following output:


 This is Matrix A

  0  1  2
  1  2  3
  2  3  4
  3  4  5
  4  5  6

 This is Matrix B

  0 -1 -2 -3
  1  0 -1 -2
  2  1  0 -1

 This is Matrix C

  5  2 -1 -4
  8  2 -4-10
 11  2 -7-16
 14  2-10-22
 17  2-13-28

