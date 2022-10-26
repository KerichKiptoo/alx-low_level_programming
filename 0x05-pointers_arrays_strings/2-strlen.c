#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s: input string
 * Return: a
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
