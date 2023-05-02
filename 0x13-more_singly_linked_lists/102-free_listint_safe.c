#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to first node in a listint_t linked list
 * Return: size of freed list, ie number of elements freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int freed;
	listint_t *current;

	if (h == NULL || *h == NULL)
		return (1);
	while (*h)
	{
		freed = *h - (*h)->next;
		if (freed > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
