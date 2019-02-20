#include "holberton.h"

/**
 * puts_half - entry point
 *@str: are numbers
 * Description: the second half
 * Return: always 0
 */

void puts_half(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
	}
	if (c % 2 == 0)
	{
		c = c / 2;
	}
	else
		c = (c + 1) / 2;
	for ( ; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}

	_putchar(10);
}
