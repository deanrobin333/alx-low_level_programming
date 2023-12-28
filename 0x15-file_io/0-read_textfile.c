#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: pointer to the file.
 * @letters: number of letters it should read
 *
 * Return: actuall number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	/* open returns -1 on failure */
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	bytes_read = read(fd, buffer, letters);

	/**
	 * must use `bytes_read` instead of `letters`
	 * else you get `write(buf) points to uninitialised byte(s)`
	 */
	write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer); /*free buffer */
	close(fd); /*close the file */

	return (bytes_read);
}
