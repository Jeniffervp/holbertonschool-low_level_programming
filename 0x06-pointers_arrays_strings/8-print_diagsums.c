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

	for (f = 0; f < size; f++)
	{
		sum = sum + a[f * (size + 1)];
		sum2 = sum2 + a[(f + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum, sum2);
}
