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
		next = first + second;
		first = second;
		second = next;
		if ((first < 4000000) && (first % 2 == 0))
		{
			sum += first;
		}
	}
	printf("%lu\n", sum);
	return (0);
}

