/*
 * File: 4-free_grid.c
 * Auth: Sess254
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array of integers.
 * @grid: The 2-demensional array of integers to be freed.
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
