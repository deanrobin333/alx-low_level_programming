#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer to first node in the linked nlist
 * @idx: index where new node should be added
 * @n: content to insert in new node
 * Return: pointer to new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
			current = current->next;
		i++;
	}
	return (NULL);
}
