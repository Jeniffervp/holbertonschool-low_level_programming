#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to sum all the parameters.
 *@separator: is the ",".
 *@n: contain the numbers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;
	int c;

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		c = va_arg(a, int);
		printf("%d", c);
		if (separator != NULL)
		{
			if (b < n - 1)
				printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}
