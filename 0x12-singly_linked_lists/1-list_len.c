#include "lists.h"
#include <stdio.h>

/**
 * list_len -  returns the number of elements in a linked
 * @h: linked lists
 *
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
