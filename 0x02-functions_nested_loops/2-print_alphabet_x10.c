#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char y;
	int i;

	i = 0;
	while (i < 10)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);

		_putchar('\n');

		i++;
	}
}
