#include <stdio.h>
#include "main"

/**
 * main - printing alphabet
 * Return: always true
 */

int main(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
		print_alphabet();
	}
	putchar('\n');
	return (0);
}
