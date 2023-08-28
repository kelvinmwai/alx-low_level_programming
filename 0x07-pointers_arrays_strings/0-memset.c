#include "main.h"

/**
 * _memset - assign specific value to a block of memory
 * @s: starting address of memory to be filled
 * @b: intended value
 * @n: number of bytes to be changed
 * Return: array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
