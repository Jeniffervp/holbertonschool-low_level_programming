#include "holberton.h"

/**
  * _sqrt_recursion - entri point
  * aux - other entri point
  *@n: is a number
  *@num: the other number
  * Description: returns the natural square root of a number.
  * Return: something
 */

int aux (int num, int n)
{
	if (n < 0)
		return (-1);
	if (num * num == n)
		return (num);
	if (num * num < n)
		return (aux (num + 1, n));
	else
		return (-1);
	return (0);
}

int _sqrt_recursion(int n)
{
	return (aux (1, n));
}
