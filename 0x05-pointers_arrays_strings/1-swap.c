#include <stdio.h>
#include "main.h"
/**
 * swap_int - a pointer function
 * @a: takes first pointer as input.
 * @b: takes 2nd pointer as input
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int first = *a;
	int second = *b;

	*a = second;
	*b = first;
}
