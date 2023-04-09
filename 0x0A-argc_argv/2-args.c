#include <stdio.h>
/**
 * main - using argv to print all arguments
 * @argc: size of array
 * @argv: array containing commands
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
