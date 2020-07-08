#include "holberton.h"
#include <stdlib.h>
/**
* alloc_grid - functions that returns a pointer to a 2d array of int
* @width: width of the array.
* @height: height of the array.
* Return: pointer of an array of integers
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(grid[a]);
			free(grid);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	return (grid);
}
