#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: answer of multiplication or
 *			1 on failure
 */

int main(int argc, char **argv)
{
	int first, second;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	first = atoi(argv[1]);
	second = atoi(argv[2]);

	printf("%d\n", first * second);

	return (0);
}
