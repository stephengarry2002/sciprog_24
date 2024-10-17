#include <stdio.h> // Including stdio.h for printf function
#include <math.h>  // Including math.h for various math functions

int main(void)
{
	// Declaring some variables and assinging values to them
	int N = 12;   // Number of steps
	float a = 0;  // Start point of Integral in degrees (same as radians in this case)
	float b = 60; // End point of Integral in degrees

	// Changing Value of b to radians
	float b_rad;      // Declaring new variable for b in radians
	b_rad = (M_PI * b) / 180;   // Formula for degrees to radians

	float sum = tan(a) + tan(b_rad);  // Defining variable for the sum of the first and last term of approximation

	int i;   // Declaring variable used for 'for' loop
	for (i = 5; i < 60; i = i + 5)    // Initialising 'for' loop between 5 and 60 degrees 
	{
		sum = sum + 2 * tan(i * M_PI / 180);   // Add onto previous sum for each step in the loop
	}
	
	sum = ((b_rad - a) / (2 * N)) * sum; // Calculating final value based on formula

	// Printing out result and compaing to actual value
	printf("Using the trapazoidal rule, the approximate value of the integral of tan(x) between 0 and Pi/3 is %f\n", sum);
	printf("The correct value for the  integral of tan(x) between 0 and Pi/3 is %f\n", logf(2)); 


	float abs_dif;	// Declaring Variable for absolute difference 
	abs_dif = fabs(sum - logf(2));
	
	float per_dif;  // Declaring  Variable for percentage difference
	 per_dif = fabs(1 - (sum / logf(2))) * 100;

	// Printing absolute and percentage differences
	printf("The absolute difference between the aproximation and the correct answer for the integral of tan(x) between 0 and Pi/3 is %f\n", abs_dif);
	printf("The percentage differnce between the approximation and the correct answer for the integral of tan(x) between 0 and Pi/3 is %f %\n", per_dif);


	return 0;
}
