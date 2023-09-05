#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings
 * @s1: first input
 * @s2: second input
 * Return: concatenation  of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int l, cl;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = cl = 0;
	while (s1[l] != '\0')
		l++;
	while (s2[cl] != '\0')
		cl++;
	conc = malloc(sizeof(char) * (l + cl + 1));

	if (conc == NULL)
		return (NULL);
	l = cl = 0;
	while (s1[l] != '\0')
	{
		conc[l] = s1[l];
		l++;
	}

	while (s2[cl] != '\0')
	{
		conc[l] = s2[cl];
		l++, cl++;
	}
	conc[l] = '\0';
	return (conc);
}
