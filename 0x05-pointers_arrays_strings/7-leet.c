#include "holberton.h"

/**
 *leet - entry point
 *@a: is a pointer
 * Return: always 0
 */

char *leet(char *a)
{
	char c[] = "4433007711";
	char b[] = "aAeEoOtTlL";
	int d, f;

	for (d = 0; a[d]; d++)
	{
		for (f = 0; b[f]; f++)
		{
			if (a[d] == b[f])
			{
				a[d] = c[f];
			}
		}
	}

	return (a);
}
