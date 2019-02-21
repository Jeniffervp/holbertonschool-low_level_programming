#include "holberton.h"

/**
  *_strncpy - entri point
  *@s1: is a pointer to a phrase
  *@s2: is a pointer to other phrase
  * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] && s2[a])
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] -  s2[a]);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
