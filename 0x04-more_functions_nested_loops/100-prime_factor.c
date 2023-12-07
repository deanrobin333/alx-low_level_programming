#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143,
 * Return: 0
 */

int main(void)
{
	long i;
	long max_f;
	long numb = 612852475143;
	double square = sqrt(numb);

	for (i = 1; i <= square; i++)
	{
		if (numb % i == 0)
			max_f = numb / i;
	}
	printf("%ld\n", max_f);
	return (0);
}
