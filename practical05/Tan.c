#include <stdio.h> //Include Libraries
#include <stdlib.h>
#include <math.h>

double arctanh1(double x, double delta); //Declare functions
double arctanh2(double x);

int main(void)
{
	double delta; //Declare double
	printf("Please enter a positive real number delta:\n"); //Use printf and scanf to ask user to input value
	scanf("%lf", &delta);

	if (delta < 0)   // If statement used for error message
	{
		printf("Error! The value of delta must be greater than 0!");
		exit(1);
	}

	double x = -0.9; //Set x as -0.9
	int length = 1000;    // Assign array length 
	double tan1[length];  // Declare arrays
	double tan2[length];
	int i = 0;

	while (x <= 0.9 && i < length)     // Call functions using while loop and compare accracy of both functions
	{
		tan1[i] = arctanh1(x, delta);
		tan2[i] = arctanh2(x);
		printf("The differnece at x = %lf is %.10lf \n", x, fabs((tan1[i] - tan2[i]) / tan2[i]));
		i++;
		x += 0.01;
	}

	return 0;
}


double arctanh1(double x, double delta) //Body of funtions
{
	double sum = 0;
	double elem, val;
	int n = 0;
	do
	{
		val = 2 * n + 1;
		elem = pow(x, val) / val;
		sum += elem;
		n++;
	} while (fabs(elem) >= delta);
	return sum;
}


double arctanh2(double x)
{
	return (log(1 + x) - log(1 - x) / 2);
}
