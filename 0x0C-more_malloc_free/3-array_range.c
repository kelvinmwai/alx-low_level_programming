#include <stdlib.h>
#include "main.h"

/**
 * *array_range - funtion that creates an array of integers
 * @min: minimum range of values to be stored
 * @max: maximum range of values stored | number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pntr;
	int k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pntr = malloc(sizeof(int) * size);

	if (pntr == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		pntr[k] = min++;

	return (pntr);
}

