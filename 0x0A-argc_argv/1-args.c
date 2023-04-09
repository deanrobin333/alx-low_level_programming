#include <stdio.h>
/**
 * main - using argv to get name of a program
 * @argc: size of array
 * @argv: array containing commands
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	if (*argv[0] != '\0')
	{
	printf("%d\n", argc);
	}
	return (0);
}
