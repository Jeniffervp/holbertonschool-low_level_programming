#include "holberton.h"

/**
 * _islower - entry point
 * @c: this parameter repressent letters
 * Description: print Holberton
 * Return: 1 or 0
 */

int _islower(int c)
{

	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
