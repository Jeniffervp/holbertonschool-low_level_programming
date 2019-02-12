#include "holberton.h"

/**
 * print_sign - entry point
 * @n: this parameter repressent a number
 * Description: print Holberton
 * Return: -1, 1 or 0
 */

int print_sign(int n)
{

	if (n < 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
			_putchar(45);
		return (-1);
	}

}
