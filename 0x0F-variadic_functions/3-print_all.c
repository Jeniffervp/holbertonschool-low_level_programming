#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - a function that prints anything.
 *@format: is the array of diferent types.
 *
 *Return: nothing.
 */

void print_all(const char * const format, ...)

{
	char *c;
	int j = 0;
	va_list args;

	va_start(args, format);
	while (format[j] != '\0')
	{
		switch (format[j])
		{
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			c = va_arg(args, char *);
			if (!c)
			{
				printf("%p", c);
				break;
			}
			printf("%s", c);
			break;
		default:
			j++;
			continue;
		}
		if (format[j + 1] != '\0')
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}
