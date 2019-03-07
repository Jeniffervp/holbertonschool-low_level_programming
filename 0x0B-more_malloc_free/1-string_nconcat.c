#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat -concatenate two strings.
 * @s1: is a number.
 * @s2: is a number.
 * @n: is a number.
 *
 * Return: Nothing.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b, c, cont = 0;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	for (b = 0; s1[b]; b++)
	{
	}
	for (c = 0; s2[c]; c++)
	{
	}
	if (n >= c)
		cont = b + c + 1;
	else
		cont = b + n + 1;
	a = malloc(sizeof(char) * cont);
	if (a == '\0')
		return (0);
	for (b = 0; s1[b]; b++)
		a[b] = s1[b];
	if (n >= c)
		for (c = 0; s2[c]; c++)
			a[b + c] = s2[c];
	else
		for (c = 0; c < n; c++)
			a[b + c] = s2[c];
	a[b + c] = '\0';
	return (a);
}
