#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees up grid allocated by alloc_grid
 * @grid: grid to free
 * @height: heightof grid
 *
 * Return: NULL if it fail
 */
void free_grid(int **grid, int height)
{
	if (!grid)
		return;
	if (!grid[0])
		return;
	while (height-- > 0)
		free(grid[height]);
	free(grid);
}
