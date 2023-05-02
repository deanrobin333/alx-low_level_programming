#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in the listint_t linked list
 * @index: index of the node, starting at 0
 * Return: pointer to nth node, or NULL if not doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;
	if (current != NULL)
		return (current);
	else
		return (NULL);
}
