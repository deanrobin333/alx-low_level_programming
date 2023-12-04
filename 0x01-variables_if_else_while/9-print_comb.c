#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *		- Numbs separated by , followed by a space
 *		- Numbers should be printed in ascending order
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}

	return (0);
}
