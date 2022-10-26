#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: Input string
 */

void print_rev(char *s)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
