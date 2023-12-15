#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int check_digit(char *str, int *len);

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0, len = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (check_digit(argv[i], &len))
			sum = sum + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (len == 1)
		printf("%d\n", sum);
	return (0);
}

/**
 * check_digit - helper function that checks if a character is a digit
 * @str: pointer to string, which is `argv`
 * @len: int to decide if we print the sum or not in the main functino
 *
 * Return: 1 (for true) if character is a string
 *			0 (for false) if character is not a string
 */

int check_digit(char *str, int *len)
{
	if (isdigit(*str))
	{
		*len = 1;
		return (1);
	}
	else
		*len = 0;

	return (0);
}
