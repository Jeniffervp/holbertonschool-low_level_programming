#include "holberton.h"

/**
  *_memset - entri point
  *@s: is the pointer
  *@b: constant byte
  *@n: the numbers of bytes to be filled
  * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cont;

	for (cont = 0; cont < n; cont++)
	{
		s[cont] = b;
	}
	return (s);
}
