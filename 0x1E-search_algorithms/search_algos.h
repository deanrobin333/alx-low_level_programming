#ifndef _search_algos_h_
#define _search_algos_h_
#include <stdio.h>
#include <stddef.h>

/* Linear search -- 0-linear.c */
int linear_search(int *array, size_t size, int value);

/* Binary search -- 1-binaryc.c */
int binary_search(int *array, size_t size, int value);
/* helper functions */
int binary_search_helper(int *array, size_t l, size_t r, int value);
void print_array(int *array, size_t l, size_t r);

#endif
