#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to linked list
 * @index: position of node starting from 0.
 *
 * Return: found nth node or NULL if doesnt exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *f_node;
	unsigned int i = 0;
	
	f_node = head;

	while (i < index)
	{
		if (f_node == NULL)
			return (NULL);
		f_node = f_node->next;
		i++;
	}

	return (f_node);
}
