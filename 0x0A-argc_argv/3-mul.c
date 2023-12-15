#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: 0 on success
 *			1 on Error
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
