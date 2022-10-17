#include <stdio.h>

/**
 * main - prints numbers of base 16
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	char a;

	for (i = 0; i <= 15; i++)
	{
		putchar((i % 10) + '0');

	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);

}

