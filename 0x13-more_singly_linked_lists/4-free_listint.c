#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free_listint - function that frees a listint_t linked list
 * @head: pointer to listint_t linked list to be freed
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	for (; head != NULL;)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
