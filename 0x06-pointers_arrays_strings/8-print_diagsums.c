#include "holberton.h"
#include <stdio.h>
/**
  *print_diagsums - entri point
  *@a: is the pointer
  *@size: is the size of the matrix
  * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int f, sum = 0, sum2 = 0;

	for (f = 0; f < (size * size); f++)
	{
		if (f % (size + 1) == 0)
		{
			sum = sum + a[f];
		}

		if (f % (size - 1) == 0 && f < (size * size) - 1)
		{
			sum2 = sum2 + a[f];
		}
	}
	printf("%d, %d\n", sum, sum2);
}
