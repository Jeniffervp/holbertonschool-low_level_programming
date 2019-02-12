#include "holberton.h"

/**
 * _abs - entry point
 * @n: this parameter repressent a number
 * Description: print Holberton
 * Return: -1, 1 or 0
 */

int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}

}
