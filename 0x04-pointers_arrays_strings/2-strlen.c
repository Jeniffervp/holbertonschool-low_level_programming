#include <stdio.h>
#include <string.h>
/**
 *_strlen - entry point
 *@s: a pointer to a word
 * Description: adsdasd
 * Return: always 0
 */

int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
