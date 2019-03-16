#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to sum all the parameters.
 *@separator: is the ",".
 *@n: contain the numbers
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;
	char *c;

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		c = va_arg(a, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (separator != NULL)
		{
			if (b < n - 1)
				printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}
