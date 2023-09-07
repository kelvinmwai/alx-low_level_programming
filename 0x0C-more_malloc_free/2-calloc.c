#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory block with a constant byte
 * @s: block of memory to be filled
 * @b: char type to copy
 * @n: number of times to copy
 *
 * Return: pointer to the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: pointer to allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pntr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pntr = malloc(size * nmemb);

	if (pntr == NULL)
		return (NULL);

	_memset(pntr, 0, nmemb * size);

	return (pntr);
}

