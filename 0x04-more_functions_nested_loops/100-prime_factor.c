#include <stdio.h>
#include <math.h>
/**
 * main - prints largest prime factor of 612852475143
 * Return: Always 0
 */
int main(void)
{
	long i;
	long numb = 612852475143;
	long square = sqrt(numb);
	long maxf;

	for (i = 1; i <= square; i++)
	{
		if (numb % i == 0)
		{
			maxf = numb / i;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
