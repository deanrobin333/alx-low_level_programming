#include "main.h"
/**
 * print_alphabet - prints the alphabet
 *
 * Return: Alphabets
 */


void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
	}
	putchar('\n');
	return (0);
}

