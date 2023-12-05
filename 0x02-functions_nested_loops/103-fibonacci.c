#include <stdio.h>

/**
 * main -  program that finds and prints the sum of the even-valued terms
 *			in the Fibonacci sequence whose values do not exceed 4,000,000
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long first = 1, second = 2, next, sum = 0;
	/**
	 * we could have started "i = 1" in for loop
	 *		(since we dont need 1, as we are using even numbers)
	 * and skipped the first if statement (gotten rid of the whole if statement
	 * and started by assigning next to the sum of first and second"
	for (i = 0; i < 50 ; i++)
	{
		if (i <= 1)
			next = i + 1;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		if ((next <= 4000000) && (next % 2 == 0))
			sum = sum + next;
	}
	printf("%lu\n", sum);

	return (0);
}
