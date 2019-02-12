#include "holberton.h"

/**
 * print_last_digit - entry point
 * @n: this parameter repressent a number
 * Description: print Holberton
 * Return: 0
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n >= 0)
	{
		_putchar(n + '0');
	}
	else
	{
		n = (-n);
		_putchar(n + '0');
	}
	return (n);
}
