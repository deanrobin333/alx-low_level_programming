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

	/**
	 * Initialize both to NULL, so that if list is empty or head is NULL
	 * it will return head, which will still be NULL
	 */
	next = NULL;
	previous = NULL;

	while (*head != NULL)
	{
		/* if list isn't empty, we can now initialize next */
		next = (*head)->next;

		/* point next node of *head to the reverse */
		(*head)->next = previous;

		/* shift the positions of the nodes foward */
		previous = *(head);
		*head = next;

		/**
		 * when next is NULL, we have reached the end of list
		 * so we terminate the loop.
		 *
		 * and hence since at the end, head == next,
		 * we can check for either *head or next if it is NULL
		 *
		 * head will be the next pointer of the last node
		 */
	}
	/**
	 * (*head) is currently the next pointer of last node
	 * so we make (*head) the last node, which is now the first node in reverse
	 *
	 * Also if empty list, loop isn't triggered and previous remains NULL.
	 */
	(*head) = previous;
	return ((*head));
}
