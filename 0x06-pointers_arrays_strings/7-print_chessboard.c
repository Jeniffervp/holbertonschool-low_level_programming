#include "holberton.h"

/**
  *print_chessboard - entri point
  *@a: is the pointer
  * Return: count
 */

void print_chessboard(char (*a)[8])
{
	unsigned int k, q;

	for (k = 0; k <= 7; k++)
	{
		for (q = 0; q <= 7; q++)
		{
			_putchar(a[k][q]);
		}
		_putchar(10);
	}
}
