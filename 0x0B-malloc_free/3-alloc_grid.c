/*
 * File: 3-alloc_grid.c
 * Auth: Sess254
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers.
 * @width: The witdh of the two dimensional array.
 * @height: The height of the two dimensional array.
 *
 * Return: If width <= 0, height <= 0, ot the function fails - Null
 * otherwise - a pointer to the 2-dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **twoDi;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDi = malloc(sizeof(int *) * height);

	if (twoDi == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twoDi[hgt_index] = malloc(sizeof(int) * width);

		if (twoDi[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twoDi[hgt_index]);

			free(twoDi);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twoDi[hgt_index][wid_index] = 0;
	}

	return (twoDi);
}
