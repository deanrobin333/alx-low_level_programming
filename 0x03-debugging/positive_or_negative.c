#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - print whether a number is positive or negative or 0
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
