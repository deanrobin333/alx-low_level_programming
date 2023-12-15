#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int check_digit(char *str);

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!check_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * check_digit - helper function that checks if a character is a digit
 * @str: pointer to string, which is `argv`
 *
 * Return: 1 (for true) if character is a string
 *			0 (for false) if character is not a string
 */

int check_digit(char *str)
{
	if (isdigit(*str))
		return (1);

	return (0);
}

