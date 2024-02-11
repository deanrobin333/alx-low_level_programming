#include <stdio.h>
#include "lists.h"

size_t looped_listint_length(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_length - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the first node of the listint_t.
 * Return: 0 If the list is not looped
 * else - the number of unique nodes in the list.
 *
 * Presentation of the looped linked list
 * 1024 -> 402 -> 98 -> 4 -> 3 -> 2 -> 1 -> 0 ->
 *                ^                            |
 *                |____________________________|
 */

size_t looped_listint_length(const listint_t *head)
{
	const listint_t *behind, *infront;
	size_t nodes = 1;

	if (head == NULL)
		return (0); /* no loop here */

	behind = head; /*set to first node */
	infront = head; /*set to first node */
	while (behind != NULL && infront != NULL && infront->next != NULL)
	{
		/* Floyd's Tortoise and Hare algorithm */
		behind = behind->next; /* move it one step foward */
		infront = (infront->next)->next;  /*move it 2 steps foward */

		if (behind == infront) /* if loop is encountered */
		{
			/* set `behind` at start, `infront` remains at meeting point */
			behind = head;
			while (behind != infront) /* count nodes outside loop portion */
			{
				nodes++;
				/*iterate both by one step until they meet again */
				/* they will meet at start of loop */
				behind = behind->next;
				infront = infront->next;
			}
			/* set `behind` at 1st node inside loop portion */
			behind = behind->next;
			while (behind != infront) /* count nodes inside loop portion */
			{
				nodes++;
				/* behind->next at tail node will be equal to `infront` */
				behind = behind->next;
			}
			return (nodes);
		}
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: number of nodes in linked list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index;

	nodes = looped_listint_length(head);
	if (nodes == 0) /* if linked list is not looped */
	{
		while (head) /*proceed with normal printing */
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else /* if it is looped, use `nodes` count */
	{
		for (index = 0; index < nodes; index++) /* iterate up to `nodes` */
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n); /*print start of loop */
	}
	return (nodes);
}
