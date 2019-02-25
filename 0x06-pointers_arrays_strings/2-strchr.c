#include "holberton.h"

/**
  *_strchr - entri point
  *@s: is the pointer
  *@c: is the string
  * Return: *s
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	if (s[a] == c)
	{
		return (&s[a]);
	}
	return (0);
}
