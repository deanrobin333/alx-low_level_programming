#include <stdio.h>
#include <stdlib.h>
/**
 * main - using argv to print results of multiplication of two arguments
 * @argc: size of array
 * @argv: array containing commands
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int multi = 0;

	if (argc == 3)
	{

		for (i = 0; i < argc; i++)
		{
			multi = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
