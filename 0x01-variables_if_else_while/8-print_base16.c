#include <stdio.h>

/**
 * main - prints numbers of base 16
 *
 * Return: 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}

