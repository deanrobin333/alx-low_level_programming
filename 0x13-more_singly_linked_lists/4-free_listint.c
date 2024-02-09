#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
