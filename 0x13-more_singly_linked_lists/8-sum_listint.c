#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates sum of all the data(n) of a listint_t linked list
 * @head: pointer to first node in listint_t linked list
 * Return: sum of data in linked list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current = head;

	for (sum = 0; current != NULL;)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
