#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Declaring function
int factorial(int n);

int main(void)
{
	//Delcaring Variable
	int i, order;
	double e, *terms;

	//Asking user to input polynomial length
	printf("Enter the required polynomial order\n");
	if (scanf("%d", &order) != 1)
	{
		printf("Did not enter a number\n");  //Error message
		return 1;
	}

	//Allocating space depending on n
	terms = malloc(order * sizeof(double));

	//Calling function
	for (i=0; i<order; i++)
	{
		terms[i] = 1.0 / (double)factorial(i+1);
	//	printf(" (e term for order %d is %1.14lf )\n", order, terms[i]);
	}

	//Initial value of e
 	e = 1.0;

	//Calculating value of e
	for (i=0; i<order; i++)
	{
		e = e+terms[i];
	}
	free(terms);

	printf(" e is estimated as %.10lf, with difference %e\n", e, e-exp(1.0));

	return 0;
}


//Factorial function
int factorial(int n)
{
        //Error messages
	if (n < 0)
	{
		printf("Error negative number passed to factorial\n");
		return -1;
	}
	else if (n == 0)
	{
		return 1;
	}
        //Recursive factorial function
	else
	{
		return(n * factorial(n-1));
	}
}
