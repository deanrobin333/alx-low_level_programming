#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>  /* for malloc */

/* 0-malloc_checked.c */
void *malloc_checked(unsigned int b);

/* 1-string_nconcat.c */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* 2-calloc.c */
void *_calloc(unsigned int nmemb, unsigned int size);

#endif /*_MAIN_H_ */
