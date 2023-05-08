#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to file to append text
 * @text_content: NULL terminated string to add at end of file
 *
 * Return: 1 on success and -1 on failure
 * if filename is NULL return -1
 * if file exist return 1.
 * if file doesnt exist or write permissions absent return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, write_value, length = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[length])
			length++;
	}
	f_open = open(filename, O_WRONLY | O_APPEND);
	write_value = write(f_open, text_content, length);
	if (f_open == -1 || write_value == -1)
		return (-1);
	close(f_open);
	return (1);
}
