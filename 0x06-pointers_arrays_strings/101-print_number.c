#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer to print
 *
 * Return: void
 *
 * when you use recurssion, for as long as the recursion is still happening,
 * its local variables and the state of the function (including return address)
 * are typically stored in a region of memory known as the stack.
 * so that when the recursion is done,
 * the next command ie executed one by one for each item that was in stack,
 * where the last one in comes out first.
 *
 * hence the last number will become the first.
 *
 * without using recursion, you will print the numbers in reverse
 */

void print_number(int n)
{
	unsigned int numb;

	if (n < 0)
	{
		_putchar('-');
		numb = n * -1;
	}
	else
		numb = n;

	if (numb / 10 != 0)
	{
		print_number(numb / 10);
	}
	_putchar((numb % 10) + '0');
}
