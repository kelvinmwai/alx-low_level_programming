#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to string with the binary number
 *
 * Return: the converted number or 0 if there is one or more chars
 * in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec = 2 * dec + (b[x] - '0');
	}

	return (dec);
}

