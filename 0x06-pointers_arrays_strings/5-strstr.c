 #include "holberton.h"

/**
  *_strstr - entri point
  *@haystack: is the pointer
  *@needle: is another pointer
  * Return: count
 */

char *_strstr(char *haystack, char *needle)
{
	int f = 0, s = 0;

	if (*needle == 0)
		return (haystack);

	for (; haystack[0] != '\0' ; haystack++)
	{
		while (haystack[f] == needle[s])
		{
			s++;
			f++;
			if (needle[s] == '\0')
				return (haystack);
		}
		f = 0;
		s = 0;
	}
	return (0);
}
