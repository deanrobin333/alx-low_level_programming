#include <stdio.h>

/**
 * main - program that prints its name followed by a new line
 * @argc: command line arguments count
 * @argv: pointer to command line arguments
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
