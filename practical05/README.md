# Practical 5

This folder contains the source code for practical 5. This practical includes a code that calculates the Fibbonacci series up to a specified number of terms. This number of terms is inputted by the user.

This practical also includes code that approximates the value of $arctanh$ using different methods. These methods are then compared.

## How to compile

The following lines of code are used to comipile its respective file:

* gcc -o Fib Fib.c -lm

* gcc -o Tan Tan.c -lm

## How to execute 

The following lines of code are used to execute each code:

* ./Fib

* ./Tan

## Outputs

* The Fib code will output the Fibonacci series up to n digits, where n is specified by the user. Note there may be overflow errors if n is large.

* The Tan code will output the value of arctanh of x using two methods and will compare the two values.
