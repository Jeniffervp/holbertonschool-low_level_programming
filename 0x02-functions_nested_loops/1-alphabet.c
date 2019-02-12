#include "holberton.h"
/**
 * print_alphabet - entry point
 *
 * Description: print Holberton
 * Return: always 0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
