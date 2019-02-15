#include "holberton.h"

/**
 * print_triangle - entry point
 * @size: are a rank
 * Description: print Holberton
 * Return: alwais 0
 */

void print_triangle(int size)
{
	int a, b, count;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				count = size - (a + 1);
				if (b < count)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar(10);
		}
	}

}
