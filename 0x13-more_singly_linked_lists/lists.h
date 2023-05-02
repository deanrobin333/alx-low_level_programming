#ifndef _LIST_H_
#define _LIST_H_

/**
 * struct listint_s - singly linked list
 * @n: integer data type
 * @next: points to the next node
 *
 * Description: Singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif
