#include "holberton.h"

/**
  *_strcat - entri point
  *@dest: is a pointer to a phrase
  *@src: is a pointer to other phrase
  * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a]; a++)
	{
	}

	for (b = 0; src[b]; b++)
	{
		dest[a + b] = src[b];
	}

	dest[a + b] = '\0';

	return (dest);

}
