#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: seperator between strings.
 * @n: The number of arguments passed to the function.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	char *str;
	unsigned int x;

	va_start(lst, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(lst, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(lst);
}
