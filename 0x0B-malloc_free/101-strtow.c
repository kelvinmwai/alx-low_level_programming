#include <stdlib.h>
#include "main.h"

/**
 * count_word - count the number of words in a string
 * @s: string to count words
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - splits the string into words
 * @str: string to split
 *
 * Return: pointer to array of strings (Success), NULL for (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, y = 0, leng = 0, words, c = 0, start, end;

	while (*(str + leng))
		leng++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= leng; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - c;
				y++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = x;
	}

	matrix[y] = NULL;

	return (matrix);
}

