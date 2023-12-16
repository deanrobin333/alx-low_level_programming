#include "main.h"

/**
 * free_grid - frees a 2d grid, previously created by alloc_grid
 * @grid: pointer to grid
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

    /**
     * `grid` represents the rows (height).
     * `grid[i]` represents the columns (width).
     * Therefore, we free the columns (width) for each row,
     * and then free the row itself.
     * We loop until we reach the `height`th row.
     */

	for (i = 0; i < height; i++)
	{
		free(grid[i]); /* free the columns for each row */
	}
	free(grid); /* free the array of row pointers */
}
