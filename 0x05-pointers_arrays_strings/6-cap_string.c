#include "holberton.h"

/**
 *string_toupper - entry point
 *@a: is a pointer
 * Return: always 0
 */

char *cap_string(char *a)
{
	int  b = 0;

	while (a[b])
	{
		if (a[b] >= 9 && a[b] <= 64)
		{
			b = b + 1;
			if (a[b] >= 97 && a[b] <= 122)
			{
				a[b] = a[b] - 32;
			}
		}
		b++;
	}
	return (a);
}
