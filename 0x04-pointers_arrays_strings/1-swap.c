#include "holberton.h"

/**
 * swap_int - entry point
 *@a: is a number
 *@b: is a number
 * Description: change the value
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
