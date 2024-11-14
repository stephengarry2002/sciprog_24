/*
Iterative and recursive versions of Euclid's algorithm
to calculate the greatest common divisor of two positive integers
*/

//Include nesecary libraries
#include <stdio.h>

//Iterative function
int iterativeGCD(int a, int b)
{
    int temp;
    while(b != 0)
    {
    temp = b;
    b = a % b;
    a = temp;
    }
    return a;
}

//Recursive function
int recursiveGCD(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return(recursiveGCD(b, a%b));
    }
}

//Main Body
int main()
{

    //Declaring Variables
    int a, b, error;

    //User inputs with error checking
    printf("Please enter two positive integers:\n");
    error = scanf("%d %d", &a, &b);
    if(error != 2)
    {
        printf("Please enter two integers!\n");
        return 1;
    }

    if (a <= 0 || b <= 0)
    {
        printf("Please enter positive integers!\n");
        return 1;
    }

    //Print values for both iterative and recursive function
    printf("iterativeGCD(%d, %d)=%d\n", a, b, iterativeGCD(a,b));
    printf("recursiveGCD(%d, %d)=%d\n", a, b, recursiveGCD(a,b));

    return 0;
}
