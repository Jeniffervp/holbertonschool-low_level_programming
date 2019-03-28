#include "holberton.h"

/**
 * get_bit - converts a binary number to an unsigned int.
 *@index: position given
 *@n: is a number.
 *
 * Return: the converted to binary.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return ((n >> index) & 1);
	return (-1);
}
