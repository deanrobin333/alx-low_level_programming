#include <stdio.h>
/**
 * main - using argv to get name of a program
 * @argc: size of array
 * @argv: array containing commands
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
