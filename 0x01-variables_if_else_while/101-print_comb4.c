#include<stdio.h>
/**
 * main - Entry point
 * Description: 'prints combinations of 3 digits'
 * Return: 0
 */
int main(void)
{
	int n, m, k;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (k = m + 1; k < 10; k++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((k % 10) + '0');

				if (n == 7 && m == 8 && k == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
