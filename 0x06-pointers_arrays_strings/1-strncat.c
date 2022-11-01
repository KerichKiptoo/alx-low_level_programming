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
	int src_len = strlen(src);
	int dest_len = strlen(dest);

	for (i = 0; i < n && i <= src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
