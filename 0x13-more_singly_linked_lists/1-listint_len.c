#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elemeents in a linked listint_t list.
 * @h: pointer to linked list listint_t
 * Return: number of nodes which is number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	for (; h != NULL; number++)
	{
		h = h->next;
	}
	return (number);
}
