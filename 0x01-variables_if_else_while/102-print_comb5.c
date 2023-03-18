#include <stdio.h>
/**
* main - two loops
* Return: 0
*/

int main(void)
{
	int s;
	int b;
	int S;
	int B;

	for (s = 0; s <= 9; s++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (S = 0; S <= 9; S++)
			{
				for (B = 0; B <= 9; B++)
				{
					putchar(s + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(S + '0');
					putchar(B + '0');
					if (s == 9 && b == 8 && S == 9 && B == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
