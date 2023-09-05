#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimentional array
 */
int **alloc_grid(int width, int height)
{
	int **qcc;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	qcc = malloc(sizeof(int *) * height);

	if (qcc == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		qcc[i] = malloc(sizeof(int) * width);

		if (qcc[i] == NULL)
		{
			for (; i >= 0; i--)
				free(qcc[i]);

			free(qcc);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			qcc[i][j] = 0;
	}

	return (qcc);
}
