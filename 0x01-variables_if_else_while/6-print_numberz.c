#include <stdio.h>

/**
 * main - prints numerals using putchar
 *
 * Return: 0.
 */

int main(void)

{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}

	putchar('\n');

	return (0);

}

