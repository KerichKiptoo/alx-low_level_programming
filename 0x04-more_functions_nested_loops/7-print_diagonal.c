#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 * Return: void
 */

print_diagonal(int n)
{
	int j;
	
	for (j = 0; j <= n; j++)
	{
		_putchar(92);

	}
	_putchar('\n');
}

