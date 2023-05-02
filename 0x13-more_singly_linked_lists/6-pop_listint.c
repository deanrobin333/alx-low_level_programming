#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to first node
 * Return: n which is head node's data, or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int number;

	if (head == NULL || *head == NULL)
		return (0);
	number = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;
	return (number);
}
