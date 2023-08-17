#include "main.h"

/**
 * print_most_numbers - print numbers (0 through 9) except 2 and 4
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50)
		{
			if (n != 52)
			{
			_putchar(n);
			}
		}
	}
	_putchar('\n');
}
