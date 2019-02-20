#include "holberton.h"

/**
 * puts2 - entry point
 *@str: are numbers
 * Description: print 2
 * Return: always 0
 */

void puts2(char *str)
{
	int c;

	while (str[c] != '\0')
	{
		if ((c % 2) == 0)
		{
			_putchar(str[c]);
		}

		c++;
	}

	_putchar(10);
}
