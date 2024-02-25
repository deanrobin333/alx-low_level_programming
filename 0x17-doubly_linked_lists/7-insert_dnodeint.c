#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: double pointer to linked list
 * @idx: idx where node should be inserted
 * @n: data to be added
 *
 * Return: new node added
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *c;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	c = *h;

	if (c)
	{
		if (idx == 0)
		{
			new->next = *h;
			*h = new;
			return (new);
		}
		while (i < idx)
		{
			c = c->next;
			if (c == NULL)
				return (NULL);
			i++;
		}
		c->prev->next = new;
		new->next = c;
		c->prev = new;
	}
	else
		*h = new;

	return (new);

}
