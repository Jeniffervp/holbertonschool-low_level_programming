#include "holberton.h"

/**
 * flip - auxiliar function.
 *@n: is a number.
 *
 * Return: the converted to binary.
 */

int flip(unsigned long int n)
{
	int cont = 0;

	while (n)
	{
		cont += n & 1;
		n >>= 1;
	}
	return (cont);
}

/**
 * flip_bits - flip to get from one number to another.
 *@m: is a index.
 *@n: is a number.
 *
 * Return: the converted to binary.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (flip(n ^ m));
}
