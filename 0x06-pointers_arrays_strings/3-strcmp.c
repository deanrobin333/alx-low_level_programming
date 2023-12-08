#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return:	0 if same bytes
 *			-15, if s1 has less bytes than s2
 *			15, if s1 has more bytes than s2
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1, len_s2, result = 0;

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (len_s1 == len_s2)
		result = 0;
	else if (len_s1 < len_s2)
		result = -15;
	else
		result = 15;

	return (result);
}
