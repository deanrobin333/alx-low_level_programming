#include <stdio.h>

/**
 * main - prints all possible different combinations of 2 digits
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
					break;
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
