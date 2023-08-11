#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
