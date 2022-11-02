#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	if (s1 == s2)
		return (0);
	else if (s1 < s2)
		return (s1 - s2);
	else
		return (s2 - s1);
}

