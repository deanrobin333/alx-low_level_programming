#include <stdio.h>
/**
* main - two loops
* Return: 0
*/

int main(void)
{
	int s;
	int b;

	for (s = 0; s <= 98; s++)
	{
		for (b = s + 1; b <= 99; b++)
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
