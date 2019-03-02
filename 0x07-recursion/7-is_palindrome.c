#include "holberton.h"

/**
  *aux - entri point
  *@n: is a number
  * Description: returns the natural square root of a number.
  * Return: something
 */

int aux(int t, char *s)
{
	if (s[t] == 0)
		return (t);
	if (t == 1)
		return (1);
	t = aux(t + 1, s);
	return (t);
}
int comp(int t, char *s, int i)
{
	if (i >= t)
		return (1);
	if (s[i] != s[t])
		return (0);
	return (comp(t, s, i + 1));
}

/**
 * _sqrt_recursion - entri point
 *@n: is a number
 * Description: returns the natural square root of a number.
 * Return: something
*/

int is_palindrome(char *s)
{
	return (comp(aux(0, s) - 1, s, 0));
}
