#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a `listint_t` list.
 *
 * @head: double pointer to linked list; first node
 * @n: value to add at end
 *
 * Return: new node added or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	current = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = new;

	return (new);
}
