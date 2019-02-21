#include "holberton.h"

/**
 *reverse_array - entry point
 *@a: a pointer to a string of numbers
 *@n: is an int
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int t;
	int s;

	for (s = 0; s < n / 2 ; s++)
	{
		t = a[s];
		a[s] = a[n - s - 1];
		a[n - s - 1] = t;

	}

}
