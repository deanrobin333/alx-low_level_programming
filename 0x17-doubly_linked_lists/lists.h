#ifndef __LISTS_H_
#define __LISTS_H_

#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* 0-print_dlistint.c */
size_t print_dlistint(const dlistint_t *h);


#endif /* __LISTS_H_ */
