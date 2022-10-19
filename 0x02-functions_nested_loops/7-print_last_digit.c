#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: number that has the last digit
 * Return: last digit
 */
int print_last_digit(int i)
{
	int l;

	if (i < 0)
		i = -i;
	l = i % 10;
	if (l < 0)
		l = -l;
	_putchar(l + '0');

	return (l);
}
