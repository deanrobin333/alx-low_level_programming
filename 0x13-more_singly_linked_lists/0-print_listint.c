#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list (linked list)
 * @h: pointer to the linked list of type listint_t to print
 * Return: Number of nodes (which represents number of elements)
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	for (; h != NULL; number++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (number);
}
