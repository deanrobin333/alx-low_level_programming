#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds a new node at the end of a doubly list
 * @head: double pointer to linked list
 * @n: content of node to add
 *
 * Return: added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	last_head = *head;

	if (last_head)  /* if list is not empty */
	{
		/* loop traverses the list until it reaches the last node */
		while (last_head->next) /* last_head stops at second last node */
			last_head = last_head->next;
		last_head->next = new_node; /*set next of 2nd last node to new_node*/
	}
	else /* if list is empty */
		*head = new_node;

	/**
	 * sets the previous pointer of the new node to the last node
	 *		in the case where the list is not empty.
	 * if list is empty, last_head will be NULL hence prev node will be NULL
	 */
	new_node->prev = last_head;
	return (new_node);
}
