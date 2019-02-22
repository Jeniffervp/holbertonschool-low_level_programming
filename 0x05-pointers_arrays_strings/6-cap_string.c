#include "holberton.h"

/**
 *string_toupper - entry point
 *@a: is a pointer
 * Return: always 0
 */

char *cap_string(char *a)
{
	int  b = 0;
	char c[14] = " ,!;.?\"(){}\n\t";
	int d;

	while (a[b])
	{
		for (d = 0; c[d]; d++)
		{
			if(c[d] == a[b])
			{
				b = b + 1;
				if (a[b] >= 97 && a[b] <= 122)
				{
					a[b] = a[b] - 32;
				}
				else
					b--;
			}
		}
		b++;
	}
	return (a);
}
