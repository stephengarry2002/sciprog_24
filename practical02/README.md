# Practical 2

This folder contains practical 2 source code. This includes two .c files called Sum.c and Conversion.c. 

Sum.c uses two for loop to calculate the same number using slightly different methods, and then gets the difference between these numbers. The difference will be non-zero which shows the error the can encure when using floating point arithmatic.

Conversion.c coverts a number in base ten to a binary value. It showcases how some numbers cannot be represented easily in binary.

## How to Compile

Use the follow lines to compile the source codes:

*  gcc -o Sum Sum.c 

*  gcc -o Conversion Conversion.c -lm 

## How to execute 

Use the following lines to execute the compiled code:

*  ./Sum

*  ./Conversion

## Output

* The Sum.c code will output the two values calculted from the for loop and will show even though they should be the same number, there is a small error due to the floating point arithmatic.

* The Conversion.c code will output a number in decimal (base 10) and will givve its equivekant value in binary (base 2). 
