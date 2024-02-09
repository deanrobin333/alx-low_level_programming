#include "lists.h"

/**
 * free_list - frees a `list_t` list
 * @head: pointer to linked lists; first node
 *
 * Return: void
 *
 * Remember the `str` element of the list, is also dynamically allocated
 */

void free_list(list_t *head)
{
	list_t *current, *temp;
	
	if (head != NULL)
		current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
