#include "holberton.h"
#include <stdlib.h>

/**
 *str_concat - concatenate two  strings to new memory space.
 * @s1: a poniter to the first string.
 * @s2: a poniter to the second string.
 *
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
	char *copy;
	int len1, len2, sum = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
	{
	}
	for (len2 = 0; s2[len2]; len2++)
	{
	}
	sum = len1 + len2;
	copy = malloc(sum * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	for (len1 = 0; s1[len1]; len1++)
		copy[len1] = s1[len1];
	for (len2 = 0; s2[len2]; len2++)
		copy[len1 + len2] = s2[len2];
	return (copy);
}
