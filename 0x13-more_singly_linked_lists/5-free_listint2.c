#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t linked list and sets head to NULL.
 * @head: pointer to listint_t linked list to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;
	for (; *head != NULL;)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
