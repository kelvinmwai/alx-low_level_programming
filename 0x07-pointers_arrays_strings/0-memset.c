#include "main.h"

/**
<<<<<<< HEAD
 * _memset - assign specific value to a block of memory
 * @s: starting address of memory to be filled
 * @b: intended value
 * @n: number of bytes to be changed
 *
 * Return: array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
=======
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
>>>>>>> 51acb1e617652cd850161e31ab3028067e2e30c4
		n--;
	}
	return (s);
}
