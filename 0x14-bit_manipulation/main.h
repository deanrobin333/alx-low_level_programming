#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h> /*for NULL*/
#include <limits.h>

/* 0-binary_to_uint.c */
unsigned int binary_to_uint(const char *b);

/* 1-print_binary.c */
void print_binary(unsigned long int n);

/* _putchar.c */
int _putchar(char c);

/* 2-get_bit.c */
int get_bit(unsigned long int n, unsigned int index);

/* 3-set_bit.c */
int set_bit(unsigned long int *n, unsigned int index);

/* 4-clear_bit.c */
int clear_bit(unsigned long int *n, unsigned int index);

/* 5-flip_bits.c */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* 100-get_endianness.c */
int get_endianness(void);

#endif /* _MAIN_H_ */
