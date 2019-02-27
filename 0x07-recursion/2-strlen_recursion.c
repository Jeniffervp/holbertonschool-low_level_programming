#include "holberton.h"

/**
  *_strlen_recursion - entri point
  *@s: is the pointer to a string
  * Description: print the lenght of a string
  * Return: always 0
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
