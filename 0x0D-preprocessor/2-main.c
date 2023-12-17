#include <stdio.h>

/**
 * main - program that prints the name of the file it was compile from
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}

