#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int x = 0, y = 0, leng1 = 0, leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;

	if (n < leng2)
		st = malloc(sizeof(char) * (leng1 + n + 1));
	else
		st = malloc(sizeof(char) * (leng1 + leng2 + 1));

	if (!st)
		return (NULL);

	while (x < leng1)
	{
		st[x] = s1[x];
		x++;
	}

	while (n < leng2 && x < (leng1 + n))
		st[x++] = s2[y++];

	while (n >= leng2 && x < (leng1 + leng2))
		st[x++] = s2[y++];

	st[x] = '\0';

	return (st);
}

