#include "lists.h"

/**
 * free_listint2 - frees as listint_t list and sets head to NULL
 * @head: double pointer to list; *head points to first node.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	*head = NULL;
}
