#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer containt string
 * Return: always zero
 */

int _atoi(char *s)
{
	int i;
	int sign = 1;
	unsigned int numb = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
			/* or sign *= -1 */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			numb = numb * 10 + (s[i] - '0');
		}
		else if (numb > 0)
		{
			break;
		}
	}
	return (numb * sign);
}
