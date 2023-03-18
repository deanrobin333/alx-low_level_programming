#include <stdio.h>
/**
* main - two loops
* Return: 0
*/

int main(void)
{
	int s;
	int b;

	for (s = 0; s <= 8; s++)
	{
		for (b = s + 1; b <= 9; b++)
		{
			putchar(s + '0');
			putchar(b + '0');
			if(s == 8 && b == 9)
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
