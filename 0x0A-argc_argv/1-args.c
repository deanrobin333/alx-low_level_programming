#include <stdio.h>

/**
 * main - program that prints its name followed by a new line
 * @argc: command line arguments count
 * @argv: pointer to command line arguments
 *
 * used `(void)` to void the `argv` variable
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
