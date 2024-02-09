#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a `listint_t` list
 * @h: pointer to linked list; first node
 *
 * Return: number of nodes
 */


size_t print_listint(const listint_t *h)
{
	unsigned int numb_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numb_nodes++;
	}

	return (numb_nodes);
}
