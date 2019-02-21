#include "holberton.h"

/**
  *_strncpy - entri point
  *@dest: is a pointer to a phrase
  *@src: is a pointer to other phrase
  *@n: is a size type
  * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);

}
