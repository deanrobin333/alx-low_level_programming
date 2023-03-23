#include <stdio.h>
/**
 * _isupper - Check for upper characters
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
