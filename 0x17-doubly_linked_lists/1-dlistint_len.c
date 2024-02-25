#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked dlistint_t
 * @h: pointer to doubly linked list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
