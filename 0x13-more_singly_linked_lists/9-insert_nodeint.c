#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to list; *head points to first node
 * @idx: index of the list where new node should be added. Index starts at 0/
 * @n: data to be added in new node
 *
 * Return: address of new node or NULL if failed.
 *			- if node cant be added at `idx` dont add node and return NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *previous, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if ((*head)->next == NULL)
		new->next = NULL;

	current = *head;
	while (i < idx)
	{
		if (current == NULL)
			return (NULL);
		previous = current;
		current = current->next;
		i++;
	}

	previous->next = new;
	new->next = current;

	return (new);
}
