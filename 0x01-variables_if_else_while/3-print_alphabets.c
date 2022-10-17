#include <stdio.h>
/**
 * main - prints alphabets in lowercase,
 * followed by upper case then a line.
 *
 * Return: Always 0. (success)
 */

int main(void)
{
	char i,j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	
	}
	putchar('\n');

	return (0);
}


