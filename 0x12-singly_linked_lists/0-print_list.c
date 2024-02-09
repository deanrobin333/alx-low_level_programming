#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a `list_t` list.
 * @h: list_t pointer to first node of linked list.
 *
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t numb_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		numb_nodes++;
	}

	return (numb_nodes);
}
