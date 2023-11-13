#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *d = haystack;
		char *f = needle;

		while (*d == *f && *f != '\0')
		{
			d++;
			f++;
		}
		if (*f == '\0')
			return (haystack);
	}

	return (0);
}
