#include <stdio.h> // Including stdio.h for printf function
#include <math.h>  // Including math.h for various math functions

#define N 12 // Defining N as a global variable

float tanarr[N+1]; // Declaring Global Array

float degtorad(float degarg); // Declaring functions
float traprule();

int main(void)
{
        // Declaring some variables and assinging values to them
        float a = 0;  // Start point of Integral in degrees (same as radians in this case)
        float b = 60; // End point of Integral in degrees
	float deg;



        int i;   // Declaring variable used for 'for' loop
        for (i = 0; i < N; i++)    // Initialising 'for' loop for tan values and storing into an array
        {
		deg = i * 5.0;
                tanarr[i] = tan(degtorad(deg));   // Storing values into an array using function degtorad
		printf("tanarr[%d] = %f\n",i ,tanarr[i]); //Printing values of tan(x)
        }

	// Calling TrapRule function
	float area = traprule();

        // Printing out result and compaing to actual value
        printf("Using the trapazoidal rule, the approximate value of the integral of tan(x) between 0 and Pi/3 is %f\n", area);
        printf("The correct value for the  integral of tan(x) between 0 and Pi/3 is %f\n", logf(2));


        float abs_dif;  // Declaring Variable for absolute difference
        abs_dif = fabs(area - logf(2));

        float per_dif;  // Declaring  Variable for percentage difference
         per_dif = fabs(1 - (area / logf(2))) * 100;

        // Printing absolute and percentage differences
        printf("The absolute difference between the aproximation and the correct answer for the integral of tan(x) between 0 and Pi/3 is %f\n", abs_dif);
        printf("The percentage differnce between the approximation and the correct answer for the integral of tan(x) between 0 and Pi/3 is %f %\n", per_dif);


        return 0;
}

// Function body
float degtorad(float degarg){
	return( (M_PI * degarg)/180);
}

// TrapRule Function
float traprule(){
	float sum;
	int i;

        // Computing first and last value of formula
        sum = tanarr[0] + tanarr[N];

        // Setting up for loop to sum values of 2tan(x)
        for (i = 1; i < N; i++)
        {
                sum = sum + 2 * tanarr[i];
        }

        // Defining Constant
        float constant = degtorad((60.0-0)/(2*N));
        sum = constant * sum; // Calculating final value based on formula

	return sum;
}
