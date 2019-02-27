#include "holberton.h"

/**
  * factorial - entri point
  *@n: is a number
  * Description: print the lenght of a string
  * Return: always 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if  (n > 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
