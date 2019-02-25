#include "holberton.h"

/**
  *_strspn - entri point
  *@s: is the pointer
  *@accept: is another pointer
  * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int first, second;
	int count = 0;

	for (first = 0; s[first]; first++)
	{
		for (second = 0; accept[second]; second++)
		{
			if (s[first] == accept[second])
				count++;
		}
		if (first > count)
			break;
	}
	return (count);
}
