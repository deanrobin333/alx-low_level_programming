#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: - points to the address of the file to create
 * @text_content: - pointer to NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int f_descripter;
	int write_value;
	int length = 0;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		while (text_content[length])
			length++;
	}
	f_descripter = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_value = write(f_descripter, text_content, length);

	if (f_descripter == -1 || write_value == -1)
		return (-1);
	close(f_descripter);
	return (1);
}
