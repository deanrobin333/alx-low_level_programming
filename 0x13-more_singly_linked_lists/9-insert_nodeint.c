#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to list; *head points to first node
 * @idx: index of the list where new node should be added. Index starts at 0/
 * @n: data to be added in new node
 *
 * Return: address of new node or NULL if failed.
 *			- if node cant be added at `idx` dont add node and return NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *previous, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	/**
	 * if malloc fails we return NULL.
	 * also using the same to return NULL if linked list is empty
	 */
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;

	/* inserting at the head */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	while (i < idx)
	{
		/**
		 * current becomes NULL when we reach the end
		 * of if the index is out of bound
		 */
		if (current == NULL)
			return (NULL);
		previous = current;
		current = current->next;
		i++;
	}

	previous->next = new;
	new->next = current;

	return (new);
}
