#include "lists.h"

/**
 * pop_listint - deletes the head node of a `listint_t` linked list
 * @head: double pointer to linked list
 *
 * Return: deleted head node's data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *d_node;
	int d_node_data;

	/**
	 * check if linked is empty or
	 * if first node is NULL
	 */
	if (head == NULL || *head == NULL)
		return (0);

	d_node = *head;
	d_node_data = (*head)->n;

	*head = (*head)->next;
	free(d_node);

	return (d_node_data);

}
