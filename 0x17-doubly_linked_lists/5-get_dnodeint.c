#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node
 * @head: pointer to linked list
 * @index: index of node to get get data
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			break;
		i++;
	}
	return (head);
}
