#include "function_pointers.h"
/**
 * int_index - a function that searches for an integers
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 * Return: -1 if no element matches or size <=0,
 *	otherwise, index of the first element
 *	for which cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}

