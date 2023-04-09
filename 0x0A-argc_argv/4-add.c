#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - using argv to print results of sum of arguments
 * @argc: size of array
 * @argv: array containing commands
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
