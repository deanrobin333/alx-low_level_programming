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
	int change = 0;
	int argument = atoi(argv[1]);

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argument < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && argument >= 0; i++)
	{
		while (argument >= cents[i])
		{
			change++;
			argument -= cents[i];
		}
	}
	printf("%d\n", change);
	return (0);
}
