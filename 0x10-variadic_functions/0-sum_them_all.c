#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculate the sum of all its parameters.
 * @n: The number of paramters passed into the function
 *
 * Return: 0 if n == 0, Otherwise the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x, sum = 0;

	va_start(list, n);

	for (x = 0; x < n; x++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
