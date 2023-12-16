#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2d array
 *
 *
 * `*two_array` typically represents an array of pointers,
 *		where each pointer points to the beginning of a row in the 2d array.
 * `**two_array` represents the individual elements in the 2d array.
 * Once you have a specific row pointer (obtained using *two_array),
 *		you can dereference it again with **two_array to access
 *		individual elements in that row.
 *
 * hence why we are setting `two_array` to the height, in malloc,
 *		where the height represents the rows.
 * two_array[i], which is essentially the columns of the ith row, to the width.
 */

int **alloc_grid(int width, int height)
{
	int **two_array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* we first create the height, the rows */
	two_array = malloc(sizeof(int) * height);

	if (two_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* we now set the columns, the width */
		two_array[i] = malloc(sizeof(int) * width);
		/**
		 * if malloc fails to create a particular columns,
		 *		for a particular row
		 * we free the columns for that row, then free that row.
		 */
		if (two_array[i] == NULL)
		{
			for (; i > 0; i--)
				free(two_array[i]); /*free all the columns here */
			free(two_array); /*free that row */
			return (NULL); /*return NULL for that row */
		}
	}
	/* initialize the grid with 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j <  width; j++)
			two_array[i][j] = 0;
	}
	return (two_array);
}
