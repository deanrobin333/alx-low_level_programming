#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to linked list
 * Return: Address where loop starts, or NULL if no loop is found
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		/* Floyd's Tortoise and Hare algorithm */
		slow = slow->next; /*tortoise - moves once step */
		fast = fast->next->next; /* hare - moves two steps */

		if (slow == fast) /*then it is a loop */
		{
			/**
			 * set `slow` to first node,
			 *		fast remains at position they met
			 * when `slow` and `fast` meet again,
			 *		that is node where the loop starts
			 */
			slow = head;
			while (slow != fast) /* find start node of loop */
			{
				slow = slow->next; /*moves step by step from beginning */
				fast = fast->next; /* moves step by step from meeting point */
			}
			return (fast);
		}
	}
	/* if while results in NULL, there is no loop */
	return (NULL);
}
