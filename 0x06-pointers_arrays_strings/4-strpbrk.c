#include "holberton.h"

/**
  *_strpbrk - entri point
  *@s: is the pointer
  *@accept: is another pointer
  * Return: count
 */

char *_strpbrk(char *s, char *accept)
{
	int first, second;

	for (first = 0; s[first]; first++)
	{
		for (second = 0; accept[second]; second++)
		{
			if (accept[second] == s[first])
				return (s + first);
		}
	if (accept[second] == s[first])
		return (s + first);
	}
	return (0);
}
