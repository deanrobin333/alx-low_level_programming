#include <stdio.h>
/**
 * main - sum of multiples of 3 or 5 below 1024
 * Return: Always 0
 */

int main(void)
{
	int i;
	int s;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			s += i;
		}
	}
	printf("%d\n", s);
	return (0);
}
