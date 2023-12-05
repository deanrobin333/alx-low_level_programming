#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 *
 * Fibonacci numbers are a sequence of numbers in which each number
 *		(Fibonacci number) is the sum of the two preceding ones.
 * So, the Fibonacci sequence begins: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on.
 *
 * we are using unsigned long instead of int
 * difference in behavior between int and unsigned long is related to
 *		the range of values that each data type can represent.
 * int data type typically has a limited range, often from
 *		-2,147,483,648 to 2,147,483,647 on systems where int is 32 bits.
 * unsigned long type has a range from 0 to 4,294,967,295 (assuming 32 bits)
 *		or even larger if it's 64 bits.
 * When you use int , you might observe negative values after a certain point
 *		due to integer overflow.
 * using unsigned long, you're less likely to encounter overflow issues
 */

int main(void)
{
	int i;
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long next;

	for (i = 0; i < 50; i++)
	{
		if (i <= 1)
			next = i + 1;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		if (i < 49)
			printf("%lu, ", next);
		else
			printf("%lu", next);
	}
	printf("\n");
	return (0);
}
