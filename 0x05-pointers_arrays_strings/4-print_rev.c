#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int leng = 0;
	int y;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (y = leng; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
