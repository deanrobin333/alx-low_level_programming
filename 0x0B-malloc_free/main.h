#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h> /* in order to use malloc */

/* 0-create_array.c */
char *create_array(unsigned int size, char c);

/* 1-strdup.c */
char *_strdup(char *str);

/* 2-str_concat.c */
char *str_concat(char *s1, char *s2);

/* 3-alloc_grid.c */
int **alloc_grid(int width, int height);

/* 4-free_grid.c */
void free_grid(int **grid, int height);

/* 100-argstostr.c */
char *argstostr(int ac, char **av);

/* 101-strtow.c */
char **strtow(char *str);
#endif  /* _MAIN_H_ */
