#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit
 * @s: string to check
 *
 * Return: 0 if a non-digit is found and 1 otherwise
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two +ve numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int leng1, leng2, leng, x, carry, dig1, dig2, *result, r = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	leng1 = _strlen(s1);
	leng2 = _strlen(s2);
	leng = leng1 + leng2 + 1;
	result = malloc(sizeof(int) * leng);
	if (!result)
		return (1);
	for (x = 0; x <= leng1 + leng2; x++)
		result[x] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		dig1 = s1[leng1] - '0';
		carry = 0;
		for (leng2 = _strlen(s2) - 1; leng2 >= 0; leng2--)
		{
			dig2 = s2[leng2] - '0';
			carry += result[leng1 + leng2 + 1] + (dig1 * dig2);
			result[leng1 + leng2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[leng1 + leng2 + 1] += carry;
	}
	for (x = 0; x < leng - 1; x++)
	{
		if (result[x])
			r = 1;
		if (r)
			_putchar(result[x] + '0');
	}
	if (!r)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

