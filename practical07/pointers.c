#include <stdio.h>
#include <stdlib.h>

//Decalring functions
int *allocatearray(int n);
void fillwithones(int *p, int n);
void printarray(int *p, int n);
void freepointer(int *p);



int main(void)
{
	//Decalring variables and calling functions
	int size = 5;
	int *array;
	array = allocatearray(size);
	fillwithones(array, size);
	printarray(array, size);
	freepointer(array);
	return 0;
}

//Functions
int *allocatearray(int n)
{
	return ((int *)malloc(n * sizeof(int)));
}

void fillwithones(int *p, int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		p[i] = 1;
	}
}

void printarray(int *p, int n)
{
	printf("\n");
	int i;
	for (i=0; i<n; i++)
	{
		printf(" %d ", p[i]);
	}
	printf("\n");
}

void freepointer(int *p)
{
	free(p);
}
