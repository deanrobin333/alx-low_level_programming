#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	int pass[333];
	int i;
	int sum;
	int n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 333; i++)
	{
		pass[i] = rand() % 77;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((3333 - sum) - '0' < 78)
		{
			n = 3333 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	putchar('\n');

	return (0);
}

