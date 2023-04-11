#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of my program
 * @ac: argc equivalent
 * @av: argv equivalent. double pointer array
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int argvCount = 0, argcCount = 0;
	char *string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			argcCount++;
		}
	}
	argcCount += ac;
	string = malloc(sizeof(char) * argcCount + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			string[argvCount] = av[i][j];
			argvCount++;
		}
		if (string[argvCount] == '\0')
		{
			string[argvCount++] = '\n';
		}
	}

	return (string);
}
