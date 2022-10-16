#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the number stored in the variable
 *
 * Return: returns 0
 */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	int lastn = n % 10;

	if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n"
				, n, lastn);
	}
	if (lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	}
	if (lastn < 6 && lastn != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				 , n, lastn);
	}

	return (0);
}
