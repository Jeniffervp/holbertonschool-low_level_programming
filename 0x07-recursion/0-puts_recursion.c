#include "holberton.h"

/**
  *_puts_recursion - entri point
  *@s: is the pointer to a string
  * Return: always 0
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar(10);
}
