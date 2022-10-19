#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char i, y;

	i = 0
	while (i <= 10)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);


		i++;
	}
	_putchar('\n');
}
