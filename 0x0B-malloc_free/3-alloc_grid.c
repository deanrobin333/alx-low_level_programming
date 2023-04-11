#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - pointer to a 2d array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **two_array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	two_array = malloc(height * sizeof(int *));
	if (two_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		two_array[i] = malloc(width * sizeof(int));
		if (two_array[i] == NULL)
		{
			for (; i >= 0; i++)
			{
				free(two_array[i]);
			}
			free(two_array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{

		for (j = 0; j < width; j++)
		{
			two_array[i][j] = 0;
		}
	}

	return (two_array);
}
