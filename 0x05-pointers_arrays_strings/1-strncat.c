#include "holberton.h"

/**
  *_strncat - entri point
  *@dest: is a pointer to a phrase
  *@src: is a pointer to other phrase
  *@n: is a size type
  * Return: always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b;

	while (dest[a])
	{
		a++;
	}

	for (b = 0; b < n && src[b]; b++)
	{
		dest[a + b] = src[b];
	}

	dest[a + b] = '\0';

	return (dest);

}
