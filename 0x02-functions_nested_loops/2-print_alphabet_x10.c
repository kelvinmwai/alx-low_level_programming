#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: 'prints alphabet 10 times'
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int x;

	x = 0;

	while (x < 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
	x++;
	}
}
