#include <stdio.h>

/**
 * main - prints the alphabet in lowercase using putchar
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
