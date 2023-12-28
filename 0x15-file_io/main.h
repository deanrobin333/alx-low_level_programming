#ifndef _MAIN_H_
#define _MAIN_H_

#include <fcntl.h>      /* For open() */
#include <unistd.h>     /* For close() and write() */
#include <sys/types.h>  /* For mode_t */
#include <sys/stat.h>   /* For S_IRUSR and S_IWUSR */
#include <stddef.h>  /*for ssize_t and size_t*/
#include <stdlib.h> /*for malloc */

/* 0-read_textfile.c */
ssize_t read_textfile(const char *filename, size_t letters);

/* 1-create_file.c */
int create_file(const char *filename, char *text_content);

#endif /* _MAIN_H_ */

