#include "lists.h"
#include <stdio.h>

/**
 * listint_t *reverse_listint - reverses a linked list
 * @head: double pointer to list; *head pointer to first node
 *
 * Return: pointer to first node:
 *
 * Restrictions - You are not allowed to use more than 1 loop.
 *				- You are not allowed to use malloc, free or arrays
 *				- You can only declare a maximum of two variables in your function
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *previous;

	if (head == NULL || *head == NULL)
		return (*head);

	next = (*head)->next;
	previous = NULL;

	while (1)
	{
		(*head)->next = previous;
		if (next == NULL)
			break;
		previous = *(head);
		*head = next;
		next = (*head)->next;
	}
	(*head)->next = previous;
	return ((*head));
}
