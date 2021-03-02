#include "holberton.h"

/**
 * free_grid - function tofree grid
 * @grid: grid to be cleared
 * @height: first bracket
 *
 * Return: void function
 */

void free_grid(int **grid, int height);
{
	int j = 0;

	for (; j < height; j++)
	{
		free(grid[j]);
	}
}
