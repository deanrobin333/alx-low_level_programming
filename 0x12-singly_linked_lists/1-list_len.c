#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to first node of linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t numb_nodes = 0;

	while (h)
	{
		numb_nodes++;
		h = h->next;
	}
	return (numb_nodes);
}
