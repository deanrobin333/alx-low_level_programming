#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to first node of a listint_t linked list
 * Return: pointer to first node of the new list which is reversed.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *reversed = NULL;

	while (*head)
	{
		reversed = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = reversed;
	}
	*head = previous;
	return (*head);
}
