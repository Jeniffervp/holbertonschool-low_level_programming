 #include "holberton.h"

/**
 * print_rev - entry point
 *@s: a pointer to a phrase
 * Description: print a phrase
 * Return: always 0
 */

void print_rev(char *s)
{
	int c;

	while (s[c] != '\0')
	{
		c++;
	}
	while (c--)
	{
		_putchar(s[c]);
	}
	_putchar(10);
}
