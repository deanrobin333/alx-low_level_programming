#include <stdio.h>
/**
 * main - using argc to get number of arguments passed
 * less one since 1st argument is always program name.
 * @argc: size of array
 * @argv: array containing commands
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
