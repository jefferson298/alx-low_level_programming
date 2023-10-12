#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its paramters
 * @n: parameter number
 * @...: Variable number
 *
 * Return: 0 (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int g, sum = 0;

	va_start(ap, n);

	for (g = 0; g < n; g++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
