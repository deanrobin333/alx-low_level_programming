#include <stdio.h>

/**
 * main - prints alphabet in lowercase, followed by \n except 'q' and 'e'
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
