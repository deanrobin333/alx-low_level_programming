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
 */

size_t looped_listint_length(const listint_t *head)
{
	const listint_t *behind, *infront;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	behind = head->next;
	infront = (head->next)->next;
	while (infront)
	{
		if (behind == infront)
		{
			behind = head;
			while (behind != infront)
			{
				nodes++;
				behind = behind->next;
				infront = infront->next;
			}
			behind = behind->next;
			while (behind != infront)
			{
				nodes++;
				behind = behind->next;
			}
			return (nodes);
		}
		behind = behind->next;
		infront = (infront->next)->next;
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
	if (nodes == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
