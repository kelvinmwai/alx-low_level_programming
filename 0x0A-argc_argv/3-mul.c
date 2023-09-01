#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: int converted from the string
 */
int _atoi(char *s)
{
	int a, b, n, leng, p, digit;

	a = 0;
	b = 0;
	n = 0;
	leng = 0;
	p = 0;
	digit = 0;

	while (s[leng] != '\0')
		leng++;

	while (a < leng && p == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			p = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			p = 0;
		}
		a++;
	}

	if (p == 0)
		return (0);

	return (n);
}

/**
 * main - function multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 for Success, 1 if there is Error
 */

int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
