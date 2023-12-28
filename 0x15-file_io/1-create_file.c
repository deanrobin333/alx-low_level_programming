#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: null terminated string to write
 *
 * Return: 1 on success and -1 on failure
 *			- if filename is NULL - return -1
 *			- if text_content is NULL -return -1
 *
 * File must have `rw-------` permissions
 * if file exist, dont change permission, but truncate it
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
		return (-1);

	close(fd); /*always remember to close */

	return (1);
}
