#include <stdio.h>

/**
 * main - program that prints number of arguments passed into it.
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
