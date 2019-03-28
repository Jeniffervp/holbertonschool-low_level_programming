#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *@b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int suma;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] == '1')
			suma = (suma << 1) | 1;
		else if (b[a] == '0')
			suma = suma << 1;
		else
			return (0);
	}
	return (suma);
}
