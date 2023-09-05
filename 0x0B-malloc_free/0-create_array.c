#include "main.h"
#include <stdlib.h>
/**
 * create_array - program to create array of size 'size'
 * and assign char c
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to the array and  NULL if there is error
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;

	return (str);
}
