#include "holberton.h"

/**
 * print_square - entry point
 * @size: are a rank
 * Description: print Holberton
 * Return: alwais 0
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a <= size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if ((a < size) && (b < size))
				_putchar(35);
			}
			if (a < size)
				_putchar(10);
		}
	}
	else
		_putchar(10);

}
