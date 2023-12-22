#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h> /*to use variadic function macros */

/* 0-sum_them_all.c */
int sum_them_all(const unsigned int n, ...);

/* 1-print_numbers.c */
void print_numbers(const char *separator, const unsigned int n, ...);

/* 2-print_strings.c */
void print_strings(const char *separator, const unsigned int n, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
