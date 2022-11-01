#include "main.h"
#include <string.h>
i
/**
 * _strncat - concatenates two strings
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int src_len, dest_len i;

	for (src_len = 0; src[src_len] != '\0'; src_len++)
	{
	}
	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
	}

	for (i = 0; i < n && i <= src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
