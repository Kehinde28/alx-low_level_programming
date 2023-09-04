#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **sea;
	int a, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	sea = malloc(sizeof(int *) * height);

	if (sea == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		sea[a] = malloc(sizeof(int) * width);

		if (sea[a] == NULL)
		{
			for (; a >= 0; a--)
				free(sea[a]);

			free(sea);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (y = 0; y < width; y++)
			sea[x][y] = 0;
	}

	return (sea);
}
