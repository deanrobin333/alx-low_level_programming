#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	/*
	 * variable to hold a;
	 * otherwise if we change a to b
	 * we wont be able to assign b to a
	 * unless we stored it somewhere first
	 * before reassigning a
	 */
	int val_a = *a;

	*a = *b;
	*b = val_a;
}
