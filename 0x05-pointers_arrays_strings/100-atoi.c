#include "main.h"
#include "stdio.h"

/**
 * _atoi - converts a string into an integer
 * @s: string to convert
 *
 * Return: converted integer
 *
 * We are using 'unsigned int numb' instead of int because numb will be
 * storing only non-negative numbers.
 * Using an unsigned data type prevents overflow and ensures that
 * we are only dealing with non-negative numbers.
 *
 * We are doing "numb = numb * 10" before adding the number ie "+ (s[i] - '0')"
 * so that we do something like concatenating.
 * multiplying by 10 shifts the digits left, giving room for next digit
 *
 * we are doing "(s[i] - '0')" and not "(s[i] + '0')" because
 * to convert a character to a number, we need to 'subtract' the character '0'.
 * Similarly, to convert a number to a character, we 'add' the character '0'.
 *
 */

int _atoi(char *s)
{
	int i, sign = 1;
	unsigned int numb = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			/**
			 * putting code here
			 * would make sure the sign immediate is negative
			 * but the question wants the first sign found in the string
			 * to set the sign
			 * ***if (s[i -1] == '-')
			 * *****sign = sign * -1;
			 */
			numb = numb * 10 + (s[i] - '0');
		}
		else if (numb > 0)
			break;
		/**
		 * the code is to get numbers. so it runs for as long as the
		 * next character is a number. if the next character is not a number,
		 * the else if statement executes. and by this time obviously
		 * num will be greater than 0 if it already encountered numbers
		 * so then it stops
		 */
	}
	/* if sign variable is negative, numb will be negative */
	return (numb * sign);
}
