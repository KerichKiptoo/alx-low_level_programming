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
	int s1_len = strlen(*s1);
	int s2_len = strlen(*s2);

	if (s1_len == s2_len)
		return (0);
	else if (s1_len < s2_len)
		return (s1_len - s2_len);
	else
		return (s2_len - s1_len);
}

