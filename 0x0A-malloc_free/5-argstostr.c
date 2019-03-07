#include "holberton.h"
#include <stdlib.h>

/**
 *argstostr - concatenate all the  strings to new memory space.
 * @s1: a poniter to the first string.
 * @s2: a poniter to the second string.
 *
 * Return: Nothing.
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, k = 0;

	if ((ac == '\0') || (av == '\0'))
	{
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[j]; j++)
		{
			k++;
		}
	}
	a = malloc(sizeof(char) * (k + ac + 1));
	k = 0;
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		if (av[i][j] == '\0')
		{
			a[k] = '\n';
			k++;
		}
	}
	return (a);
}
