#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int b, n, leng;

	leng = 0;

	for (b = 0; str[b] != '\0'; b++)
		leng++;

	n = (leng / 2);

	if ((leng % 2) == 1)
		n = ((leng + 1) / 2);

	for (b = n; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
