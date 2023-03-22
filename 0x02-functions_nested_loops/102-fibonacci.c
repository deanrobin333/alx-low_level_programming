#include <stdio.h>
/**
 * main - printing fibonacci
 * Return: always 0
 */

int main(void)
{
	int i;
	unsigned long first = 1, second = 2, next;

	for (i = 0; i < 50; i++)
	{
		if (i <= 1)
		{
			next = i + 1;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		if (i < 49)
		{
			printf("%lu, ", next);
		}
		else
		{
			printf("%lu", next);
		}
	}
	printf("\n");

	return (0);
}

