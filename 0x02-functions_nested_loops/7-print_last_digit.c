#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: number that has the last digit
 * Return: last digit
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	_putchar(l);

	return (i % 10);
}
