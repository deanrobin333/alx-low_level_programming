#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			/* loop through the arguments */
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
		printf("0\n");

	return (0);
}
