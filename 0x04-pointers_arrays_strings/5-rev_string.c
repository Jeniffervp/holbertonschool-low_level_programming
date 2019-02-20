#include "holberton.h"

/**
 *rev_string - entry point
 *@s: a pointer to a word
 * Description: rev a word
 * Return: always 0
 */

void rev_string(char *s)
{
	int i, t, l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;

	}

}
