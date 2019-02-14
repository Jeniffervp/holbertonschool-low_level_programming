#include "holberton.h"

/**
 * print_line - entry point
 *@n: are numbers
 * Description: print Holberton
 * Return: alwais 0
 */

void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		if (a > 0)
			_putchar(95);
	}
	_putchar(10);
}
