#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to first node in a listint_t linked list
 * Return: size of freed list, ie number of elements freed.
 *
 * Presentation of the looped linked list
 * 1024 -> 402 -> 98 -> 4 -> 3 -> 2 -> 1 -> 0 ->
 *                ^                            |
 *                |____________________________|
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int freed;
	listint_t *current;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		freed = *h - (*h)->next;
		/**
		 * If freed is positive, it means there are more nodes to free
		 * If freed is non-positive (including zero), it means
		 *		we’ve reached the end of the list
		 *		(either the last node or an empty list).
		 *
		 * Substracting from NULL gives negative.
		 * Subtracting from freed node gives negative
		 */
		if (freed > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			length++;
		}
		else /* *h is now last node */
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
