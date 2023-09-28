#include "main.h"

/**
 * flip_bits - counts the number of bits you would need to flip
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int curr;
	unsigned long int exc = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		curr = exc >> x;
		if (curr & 1)
			count++;
	}

	return (count);
}

