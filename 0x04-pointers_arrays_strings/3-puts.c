#include "holberton.h"

/**
 *_puts - entry point
 *@str: a pointer to a phrase
 * Description: print a phrase
 * Return: always 0
 */

void _puts(char *str)
{
	int c;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar(10);
}
