#include <stdio.h>
/**
 * main - printing even fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int i;
	unsigned long first = 1, second = 2, next, sum = 0;

	for (i = 1; i <= 50 ; i++)
	{
		if ((first < 4000000) && (first % 2 == 0))
		{
			sum += next;
		}
		next = first + second;
		first = second;
		second = next;
		printf("%lu\n", sum);
	}
	printf("%lu\n", sum);
	return (0);
}

