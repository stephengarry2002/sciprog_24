# Practical 4
This folder contains practical 4 source code. This code estimates the value of the integral of $tan(x)$ between $0$ and $\frac{\pi}{3}$ and compares the approximation with the correct answer for the integral.
 
This code adds upon the code in practical 3, as it makes use of 'for' loops, arrays and functions to optimise the code.

## How to Compile:
Use the following line of code to compile the source code:

* gcc -o TrapLoop TrapLoop.c -lm

## How to Execute
Use the following line of code to execute the code:

* ./TrapC

## Outputs
The following is the outputs for the code:

* The code will print the values of tan(x)

* Using the trapazoidal rule, the approximate value of the integral of tan(x) between 0 and Pi/3 is 0.619470

* The correct value for the integral of tan(x) between 0 and Pi/3 is 0.693147

* The absolute difference between the aproximation and the correct answer for the integral of tan(x) between 0 and Pi/3 is 0.073677

* The percentage differnce between the approximation and the correct answer for the integral of tan(x) between 0 and Pi/3 is 10.629386 %
