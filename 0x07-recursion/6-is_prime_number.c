#include "holberton.h"
#include <stdio.h>
/**
  *aux - entri point
  *@n: is a number
  *@num: the other number
  * Description: returns the natural square root of a number.
  * Return: something
 */

int aux(int a, int n)
{
	if (n < 2)
		return (0);
	if (n == a)
		return (1);
	if (n % a == 0)
		return (0);
	return (aux(a + 1, n));
}
/**
 * _srt_recursion - entri point
 *@n: is a number
 * Description: returns the natural square root of a number.
 * Return: something
*/

int is_prime_number(int n)

{
	return(aux(2, n));
}
