#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int hash;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (space = size; space > hash; space--)
			{
				_putchar(' ');
			}
			for (space = 1; space <= hash; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
