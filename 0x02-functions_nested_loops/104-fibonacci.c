#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers, starting with 1 and 2
 * Return: 0
 *
 * so from the 1st to the 92, number it prints well.
 *		technically 'unsigned long next' handles 90 numbers,
 *		since the first and second are hardcorded.
 * so we need the 93rd to the 98th number.
 * we get this by iterating backwards. to get the 6 numbers from 98 to 93.
 */

int main(void)
{
	int i;
	unsigned long first = 1, second = 2, next = 0, support = 1000000000;
	unsigned long f1, f2, s1, s2;

	for (i = 0; i <= 90; i++)
	{
		if (i <= 1)
			next = i + 1;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		if (i < 90)
			printf("%lu, ", next);
		else
			printf("%lu", next);
	}
	f1 = (first / support);
	f2 = (first % support);
	s1 = (second / support);
	s2 = (second % support);

	for (i = 92; i <= 98; ++i)
	{
		s1 = s1 + f1;
		f1 = s1 - f1;
		s2 = s2 + f2;
		f2 = s2 - f2;
		printf(", %lu", s1 + (s2 / support));
		printf("%lu", s2 % support);
	}

	printf("\n");

	return (0);
}
