#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index `index` of a listint_t
 *							linked list.
 * @head: double pointer to linked list; *head points to first node
 * @index:  index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	current = *head;
	while (i < index)
	{
		if (current == NULL)
			return (-1);
		previous = current;
		current = current->next;
		i++;
	}

	previous->next = current->next;
	free(current);
	return (1);
}
