#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: first integer
 * @n: second integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i];
		if (n - i == 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
