#include "holberton.h"

/**
 * jack_bauer - entry point
 *
 * Description: print Holberton
 * Return: 0
 */

void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			if (x == 23 && y == 59)
			{
			}
			_putchar(10);
		}
	}
		_putchar(10);
}
