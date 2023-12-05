#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 below 1024
 * Return: 0
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * This program that computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded)
 */

int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum = sum + n;
	}
	printf("%d\n", sum);

	return (0);
}
