#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at end of a file
 * @filename: pointer to file
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure.
 *			1 if the file exists, -1 if the file doesnt exist
 *			-1 if filename is NULL.
 *
 * if text_content is NULL, dont add anything.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);
	else
		len = 0;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, len);

	if (bytes_written == -1)
		return (-1);

	close(fd);
	return (1);
}
