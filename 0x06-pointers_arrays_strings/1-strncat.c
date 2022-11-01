#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	for (i = 0; i <= len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
