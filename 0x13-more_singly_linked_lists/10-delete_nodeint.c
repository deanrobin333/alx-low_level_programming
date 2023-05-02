#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at position index of a listint_t
 * @head: pointer to the first node in the list
 * @index: index of the node that should be deleted.
 * Return: 1 if succeeds, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *updated = NULL;
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current != NULL || (current->next) != NULL)
			return (-1);
		current = current->next;
	}
	updated = current->next;
	current->next = updated->next;
	free(updated);
	return (1);
}
