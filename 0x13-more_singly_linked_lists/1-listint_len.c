#include "lists.h"

/**
 * listint_len - returns the no of elements in a linked listint_t list
 * @h: pointer to linked list; first node
 *
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t numb_nodes = 0;

	while (h != NULL)
	{
		numb_nodes++;
		h = h->next;
	}

	return (numb_nodes);
}
