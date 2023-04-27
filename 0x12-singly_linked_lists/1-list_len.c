#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked_t list (linked list)
 * @h: pointer to the list_t list
 * Return: number of elements in h (linked_t list)
 */
size_t list_len(const list_t *h)
{
	size_t numb_list;

	for (numb_list = 0; h != NULL; numb_list++)
	{
		h = h->next;
	}

	return (numb_list);
}

