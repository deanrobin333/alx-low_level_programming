#include <stdio.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list (linked list)
 * @h: pointer to the linked list to print
 *
 * Return: the number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t numb_nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		numb_nodes++;
	}

	return (numb_nodes);
}
