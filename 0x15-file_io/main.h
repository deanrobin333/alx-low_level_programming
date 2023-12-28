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

#endif /* _MAIN_H_ */

