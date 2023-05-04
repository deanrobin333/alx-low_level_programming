#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks endiannes
 * whether integers are represented with the most significant byte stored
 * at the lowest address (big endian) or at the highest address (little endian)
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *address = (char *) &i;

	return (*address);
}
