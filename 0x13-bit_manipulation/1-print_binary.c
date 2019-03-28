#include "holberton.h"

/**
 * binary - auxiliar function.
 *@n: is a number.
 *
 * Return: the converted to binary.
 */

void binary(unsigned long int n)
{
	if (n > 1)
		binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

/**
 * print_binary - converts a binary number to an unsigned int.
 *@n: is a number.
 *
 * Return: the converted to binary.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		binary(n);
}
