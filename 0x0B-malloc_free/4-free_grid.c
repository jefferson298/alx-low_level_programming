#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: The 2d grid
 * @height: The grid's height dimension
 * Description: This frees memory of grid
 * Return: 0 (success)
 *
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
