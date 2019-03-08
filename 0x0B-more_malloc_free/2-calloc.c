#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc -concatenate two strings.
 * @nmemb: elements to be allocated..
 * @size: size of elements.
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned char b;

	if ((nmemb == '\0') || (size == '\0'))
		return (0);

	a = malloc(size * nmemb);
	if (a == '\0')
		return (0);
	for (b = 0; b < (size * nmemb); b++)
		a[b] = '\0';
	return (a);
}
