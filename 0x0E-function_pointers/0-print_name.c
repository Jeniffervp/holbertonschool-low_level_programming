#include "function_pointers.h"

/**
 * print_name - print a function.
 *@name: poniter to the information.
 *@f: pointer to function.
 *
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name == 0) || (f == 0))
		return;
	f(name);
}
