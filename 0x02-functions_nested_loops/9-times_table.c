#include "holberton.h"

/**
 * times_table - entry point
 *
 * Description: print times table
 * Return: 0
 */

void times_table(void)
{
	int x, y, mul;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			mul = x * y;

			if (mul/10 != 0)
			{
				_putchar(mul/10 + '0');
				_putchar(mul%10 + '0');
			}
			else
			{
				if (y != 0)
				{
				_putchar(' ');
				}
				_putchar(mul%10 + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar(10);
	}
}
