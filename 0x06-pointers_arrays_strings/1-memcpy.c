#include "holberton.h"

/**
  *_memcpy - entri point
  *@dest: is the pointer
  *@src: constant byte
  *@n: the numbers of bytes to be filled
  * Return: *s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont;

	for (cont = 0; cont < n; cont++)
	{
		dest[cont] = src[cont];
	}
	return (dest);
}
