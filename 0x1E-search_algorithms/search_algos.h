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

/* 7. Jump search -- 100-jump.c */
int jump_search(int *array, size_t size, int value);

/* 9. Interpolation search -- 102-interpolation.c */
int interpolation_search(int *array, size_t size, int value);

/* 10. Exponential search -- 103-exponential.c */
int exponential_search(int *array, size_t size, int value);
/* helper function */
int _binary_search(int *array, size_t left, size_t right, int value);

/* 11. Advanced binary search -- 104-advanced_binary.c */
int advanced_binary(int *array, size_t size, int value);
/* helper function */
int recursive_search(int *array, size_t size, int value);

#endif
