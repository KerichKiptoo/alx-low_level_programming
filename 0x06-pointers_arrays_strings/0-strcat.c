#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: string to be appended to dest
 * @src: steing to be appended to
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len_src, len_dest, i;

	for (len_src = 0; src[len_src] != '\0'; len_src++)
	{
	}
	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{
	}
	for (i = 0; i <= len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
