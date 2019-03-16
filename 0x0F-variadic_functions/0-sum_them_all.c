#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all the parameters
 *@n: contain the parameters.
 *
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int b;
	int sum = 0;

	va_start(a, n);
	if (n == 0)
		return (0);

	for (b = 0; b < n; b++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
