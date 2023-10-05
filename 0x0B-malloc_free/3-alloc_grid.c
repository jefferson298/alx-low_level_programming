#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: The width input
 * @height: The height input
 * Return: The pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **bcd;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	bcd = malloc(sizeof(int *) * height);

	if (bcd == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		bcd[x] = malloc(sizeof(int) * width);

		if (bcd[x] == NULL)
		{
			for (; x >= 0; x--)
				free(bcd[x]);

			free(bcd);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			bcd[x][y] = 0;
	}
	return (bcd);
}
