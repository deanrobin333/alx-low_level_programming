#include "lists.h"
#include <stdio.h>

/**
 * listint_t *reverse_listint - reverses a linked list
 * @head: double pointer to list; *head pointer to first node
 *
 * Return: pointer to first node:
 *
 * Restrictions - You are not allowed to use more than 1 loop.
 *				- You are not allowed to use malloc, free or arrays
 *				- You can only declare a maximum of two variables in your function
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *previous;

	next = (*head)->next;
	previous = NULL;

	/**
	 * if linked list is empty or first node is NULL
	 * While loop will not be triggered
	 * it will return *head which is NULL
	 */

	while (*head != NULL)
	{
		/* point next node of *head to the reverse */
		(*head)->next = previous;

		/* shift the positions of the nodes foward */
		previous = *(head);
		*head = next;
		next = next->next;

		/**
		 * when next is NULL, we have reached the end of list
		 * so we terminate the loop
		 */
		if (next == NULL)
			break;
	}
	/**
	 * (*head) is currently the last node
	 * so we make next pointer of (*head) reverse, to point to the node before
	 */
	if (*head != NULL)
	{
		(*head)->next = previous;
		return ((*head));
	}
	else
		return ((*head));
}
