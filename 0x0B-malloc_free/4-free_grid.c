#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory when the array
 * is no longer needed
 * @grid: pointer to a pointer to the array
 * @height: integer representing the
 * height of the array.
 * Return: sucess
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
