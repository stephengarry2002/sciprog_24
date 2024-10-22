#include <stdio.h>  //Including Libraries
#include <stdlib.h>

void fib(int *a, int *b); // Declaring fib function

int main(void){

	int n;  // Declaring input integer n
	printf("Please input a positive integer n, greater than 1\n");
	scanf("%d", &n); // Use scanf function to store input
	if (n<1)
		{
		printf("Error! n must be greater than 1!\n"); // Error message is n<1 is inputted
		exit(1);
		}

	int f0 = 0; //Declaring 1st two values of Fib series
	int f1 = 1;
	printf("The Fibonacci Series is: \n"); //Printing 1st two variables
	printf("%d, %d ",f0 ,f1);

	int i;
	for (i = 2; i <=n; i++) //Pritning series up to n

		{

		fib(&f1, &f0); // Calling function
		printf("%d ", f1);
		if ((i+1)%10 == 0){   // Linebreak every 10 numbers
			printf("\n");
			}
		}




	return 0;
}

// Function Body
void fib(int *a, int *b){

	int next;
	next = *a + *b;

	*b = *a;
	*a = next;
}
