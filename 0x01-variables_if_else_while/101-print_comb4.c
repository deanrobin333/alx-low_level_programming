#include <stdio.h>

/**
 * main - prints all different combination of 3 digits
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			for (k = j; k <= 9; k++)
				if (i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i == 7 && j == 8 && k == 9)
						break;
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
