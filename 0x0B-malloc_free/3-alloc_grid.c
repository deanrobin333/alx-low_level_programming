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
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);
		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);
			free(mee);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}
	return (mee);
}
