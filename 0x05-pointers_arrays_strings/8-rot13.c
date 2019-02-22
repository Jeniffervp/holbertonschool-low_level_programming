#include "holberton.h"

/**
 *rot13 - entry point
 *@rot: is a pointer
 * Return: always 0
 */

char *rot13(char *rot)
{
	char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char second[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int d, f;

	for (d = 0; rot[d]; d++)
	{
		for (f = 0; first[f]; f++)
		{
			if (rot[d] == first[f])
			{
				rot[d] = second[f];
				break;
			}
		}
	}

	return (rot);
}
