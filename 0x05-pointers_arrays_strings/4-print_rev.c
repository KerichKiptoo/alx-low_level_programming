#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: Input string
 */

void print_rev(char *s)
{
	int j, len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
