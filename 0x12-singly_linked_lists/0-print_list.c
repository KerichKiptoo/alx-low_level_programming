#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list.
 * @h: pointer to the list to be printed
 *
 * Return: The number of nodes in h.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
