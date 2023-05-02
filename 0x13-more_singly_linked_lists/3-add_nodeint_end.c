#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at end of a listint_t linked list
 * @head: double pointer to first element in the listint_t linked list
 * @n: content to insert in the new node
 * Return: Pointer to new node, or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_head = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	while (current_head->next)
		current_head = current_head->next;
	current_head->next = new_node;
	return (new_node);
}
