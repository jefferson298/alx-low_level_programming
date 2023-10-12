#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that Prints numbers
 * followed by a new line
 * @separator: A string
 * @n: Integer number
 * @...: The variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int g;

	va_start(nums, n);

	for (g = 0; index < n; g++)
	{
		printf("%d", va_arg(nums, int));

		if (g != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
