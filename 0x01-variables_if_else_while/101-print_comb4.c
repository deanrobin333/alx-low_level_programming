#include <stdio.h>
/**
* main - two loops
* Return: 0
*/

int main(void)
{
	int s;
	int b;
	int g;

	for (s = 0; s <= 8; s++)
	{
		for (b = s + 1; b <= 9; b++)
		{
			for (g = b + 1; g <= 9; g++)
			{
				putchar(s + '0');
				putchar(b + '0');
				putchar(g + '0');
				if (s == 7 && b == 8 && g == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
