#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index..
 *@index: position given
 *@n: is a number.
 *
 * Return: return 1 if it work or -1 if it not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
