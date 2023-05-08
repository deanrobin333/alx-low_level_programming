#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters in text file being read and printed
 * Return: number of letters it could read and print
 * or 0 if file couldnt be opened or read or filename is null or write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f_descripter;
	ssize_t write_value;
	ssize_t read_value;

	f_descripter = open(filename, O_RDONLY);
	if (f_descripter == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	read_value = read(f_descripter, buffer, letters);
	write_value = write(STDOUT_FILENO, buffer, read_value);
	free(buffer);
	close(f_descripter);
	return (write_value);
}
