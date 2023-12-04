#include <stdio.h>
#include <unistd.h>
/**
 * main - printing without printf or puts to standard error
 * Return: 1, since its printing to standard error
 */

int main(void)
{
	char w[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long int len = sizeof(w);

	write(2, w, len);

	return (1);
}
