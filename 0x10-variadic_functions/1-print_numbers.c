#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers given as parameters
 * @separator: The string to be printed between numbers.
 * @n: The number of arguments passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int x;

	va_start(lst, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(lst, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(lst);
}
