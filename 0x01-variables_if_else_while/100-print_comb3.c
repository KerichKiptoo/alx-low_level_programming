#include <stdio.h>

/**
 * main - prints all possible combination of two digits
 *
 * Return: 0.
 */

int main(void)
{	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j >= i && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i == 8 && j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
