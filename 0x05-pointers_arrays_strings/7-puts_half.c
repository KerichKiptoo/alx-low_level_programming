#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 */

void puts_half(char *str)
{
	int len, i;

	for (len = 0; str[len] != 0; len++)
	{
	}
	if (len % 2 == 0)
	{
		for (i = (len - 1) / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		for (i = (len - 2) / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
