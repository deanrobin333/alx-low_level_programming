#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a `list_t` list.
 * @head: double pointer to linked list
 * @str: string to be added to node
 *
 * Return: pointer to added node or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;

	return (*head);
}
