#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: name to print
 * @f: pointer to the print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
