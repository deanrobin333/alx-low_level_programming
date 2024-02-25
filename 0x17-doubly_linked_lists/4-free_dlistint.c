#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to linked list
 *
 * Returns: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
