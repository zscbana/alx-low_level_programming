#include "main.h"

/**
 * free_grid - hat frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: two dimntional araay
 * @height: height of rarray
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
