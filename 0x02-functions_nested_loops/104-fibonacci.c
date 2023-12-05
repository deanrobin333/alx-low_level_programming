#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long first = 1, second = 2, next = 0;

	for (i = 0; i <= 98; i++)
	{
		if (i <= 1)
			next = i + 1;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		if (i < 98)
			printf("%lu, ", next);
		else
			printf("%lu", next);
	}
	printf("\n");

	return (0);
}
