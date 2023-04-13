#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: memory address to be filled.
 * @b: constant byte to be used to fill
 * @n: number of bytes to fill.
 * is-similar to project 0x07-pointers_arrays_strings/0-memset.c
 * Return: return to s, the new filled value.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j;

	j = n;

	for (i = 0; i < j; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: represents number of elements in array
 * @size: size of each element
 * Return: pointer to memory of array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
	{
		return (NULL);
	}
	_memset(pointer, 0, size * nmemb);

	return (pointer);

}
