#include "main.h"

/**
 * get_endianness - checks for machine endianness
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *en = (char *) &x;

	return (*en);
}

