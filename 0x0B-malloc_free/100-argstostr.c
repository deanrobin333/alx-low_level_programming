#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of my program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to string, or NULL on failure
 *
 * We create one string, that holds all the arguments in one continuous string;
 * where the argument ends (at the null character) we insert a new line.
 *
 *
 * To create using malloc.
 * we add ac to ac_count, which will take care of the null character,
 * we ommitted, so that we are able to add spaces.
 *
 * We then add 1, to create space for the null character of our string
 */

char *argstostr(int ac, char **av)
{
	int i, j, ac_count = 0, av_count = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ac_count++; /* loop stops once it hits a null character */
	}
	ac_count += ac;

	string = malloc(sizeof(char) * ac_count + 1);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			string[av_count] = av[i][j];
			av_count++;
		}

		/*
		 * av[i][j] becomes false when it encounters the null character
		 * so when we encounter '\0', we set the next index to '\n'
		 */

		if (string[av_count] == '\0')
			string[av_count++] = '\n';
	}
	string[strlen(string)] = '\0';
	return (string);
}
