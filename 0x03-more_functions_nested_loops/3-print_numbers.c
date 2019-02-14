#include "holberton.h"

/**
 * print_numbers - entry point
 *
 * Description: print Holberton
 * Return: alwais 0
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
