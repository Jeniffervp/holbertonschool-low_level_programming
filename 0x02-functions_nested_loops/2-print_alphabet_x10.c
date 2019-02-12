#include "holberton.h"

void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 48 ; x <= 57; x++)
        {
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
        _putchar('\n');
	}

}
