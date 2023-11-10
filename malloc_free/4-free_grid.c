#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - point of entry
 * @grid: multidimensional array
 * @height: Height of the m array
 * Return: Pointer if successful, NULL on failure.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

