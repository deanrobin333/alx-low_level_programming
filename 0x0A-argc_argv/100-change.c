#include <stdio.h>
#include <stdlib.h>

/**
 * main - using argc and argv to get change
 * @argc: size of array. Number of arguments
 * @argv: array containing arguments
 * Return: always 0, 1 for error.
 */

int main(int argc, char *argv[])
{
	int i;
	int cents[] = {25, 10, 5, 2, 1};
	int change;
	int argument;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = 0;
	argument = atoi(argv[1]);

	if (argument < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && argument >= 0; i++)
	{
		for (; argument >= cents[i]; argument -= cents[i])
		{
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
