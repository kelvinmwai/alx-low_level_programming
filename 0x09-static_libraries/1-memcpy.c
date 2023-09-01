#include "main.h"
/**
 *_memcpy - function that copies a memory area
 *@dest: where stored
 *@src: where copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;


	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

