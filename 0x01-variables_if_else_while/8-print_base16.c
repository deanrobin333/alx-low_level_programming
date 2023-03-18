#include <stdio.h>
/**
* main - Hexadecimal numbers
* Return: 0
*/

int main(void)
{
	int i;
	int a;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
