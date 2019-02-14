#include "holberton.h"

/**
 * print_diagonal - entry point
 *@n: are numbers
 * Description: print Holberton
 * Return: alwais 0
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a > b)
				{
					_putchar(32);
				}
				else if (a == b)
				{
					_putchar(92);
					_putchar(10);
				}
			}
		}
	}
}
