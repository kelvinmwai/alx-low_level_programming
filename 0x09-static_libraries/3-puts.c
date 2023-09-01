#include "main.h"

/**
 * _puts - Program that prints a string to stdout
 * @s: The string to be printed
 * _putchar - new line
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
		_putchar('\n');
}
