#include <stdio.h>

/**
 * main - program that prints its name followed by a new line
 * @argc: command line arguments count
 * @argv: pointer to command line arguments
 *
 * used `__attribute__((unused))` to void the `argc` variable
 *
 * Return: EXIT_SUCCESS
 */

int main(__attribute__((unused))int argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
