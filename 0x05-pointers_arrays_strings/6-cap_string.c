#include "holberton.h"

/**
 *cap_string - entry point
 *@a: is a pointer
 * Return: always 0
 */

char *cap_string(char *a)
{
	int  b = 0;
	char c[] = " ,!;.?\"(){}\n\t";
	int d;

	while (a[b])
	{
		for (d = 0; c[d]; d++)
		{
			if (c[d] == a[b])
			{
				b = b + 1;
				if(a[b])
				{
					if (a[b] >= 97 && a[b] <= 122)
					{
						a[b] = a[b] - 32;
						break;
					}
					else
					{
						b--;
						break;
					}
				}
			}
		}
		b++;
	}
	return (a);
}
