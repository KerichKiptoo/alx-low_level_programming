#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 *main - Prints whether the number is positive or negative
 *
 * Return: Always 0.
 */



/* betty style doc for function main goes there */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
	{
		printf("%d is positive\n", n);
	}
	if (n==0)
	{
		printf("%d is zero\n", n);
	}
	if (n<0)
	{
		printf("%d is negative\n", n);
	}


	return (0);

}
