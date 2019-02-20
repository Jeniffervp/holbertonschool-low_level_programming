#include "holberton.h"
#include <stdio.h>
/**
 * print_array - entry point
 *@a: pointer
 *@n: number of array to be printed
 * Description: the second half
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar(10);
}
