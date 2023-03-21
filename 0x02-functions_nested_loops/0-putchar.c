#include <stdio.h>
#include "main.h"

/**
 * main - prints the text _putchar
 * Return: Always true ie 0
 */

int main(void)
{
	char words[] = "_putchar";
	int i;

	for (i = 0; words[i] != '\0'; i++)
	{
	_putchar(words[i]);
	}
	putchar('\n');
	return (0);
}
