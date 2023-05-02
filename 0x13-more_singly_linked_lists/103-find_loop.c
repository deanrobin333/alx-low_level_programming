#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to linked list
 * Return: Address where loop starts, or NULL if no loop is found
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *behind = head;
	listint_t *infront = head;

	if (head == NULL)
		return (NULL);
	for (; behind != NULL && infront != NULL && (infront->next) != NULL;)
	{
		infront = infront->next->next;
		behind = behind->next;
		if (behind == infront)
		{
			behind = head;
			while (behind != infront)
			{
				behind = behind->next;
				infront = infront->next;
			}
			return (infront);
		}
	}
	return (NULL);
}
