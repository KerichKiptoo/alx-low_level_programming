#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 *
 *@n: number of times the line is drawn
 *
 * Return: 0
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int t = 0;

		while (t < n)
		{
			_putchar('_');

			t++;
		}
	}

}
