#include <stdio.h>
/**
* main - two loops
* Return: 0
*/

int main(void)
{
	int s;
	int b;

	for (s = 0; s < 99; s++)
	{
		for (b = 0; b < 100; b++)
		{
			putchar((s / 10) + '0');
			putchar((s % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (s == 98 && b == 99)
			{
			break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
