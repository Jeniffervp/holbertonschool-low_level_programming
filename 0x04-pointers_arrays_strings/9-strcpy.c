#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - entry point
 *@dest: this is the place for the copy
 *@src: is the pointer to the phrase
 * Description: copy the phrase
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
