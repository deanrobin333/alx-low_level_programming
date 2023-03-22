#include <stdio.h>
/**
 * main - printing first 98 fibonacci
 * no hard code
 * Return: always 0
 */

int main(void)
{
	int i;
	unsigned long first = 1, second = 2, next;

	for (i = 0; i < 98; i++)
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
		if (i < 97)
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

