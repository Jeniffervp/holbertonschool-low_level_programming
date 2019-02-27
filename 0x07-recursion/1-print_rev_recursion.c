#include "holberton.h"

/**
  *_print_rev_recursion - entri point
  *@s: is the pointer to a string
  * Return: always 0
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
