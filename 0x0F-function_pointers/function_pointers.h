#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stdlib.h> /*for NULL*/

/*_putchar.c*/
int _putchar(char c);

/*0-print_name.c*/
void print_name(char *name, void (*f)(char *));

#endif /*_FUNCTION_POINTERS_H_*/