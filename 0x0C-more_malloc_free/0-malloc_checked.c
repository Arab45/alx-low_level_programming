#include "main.h"
#include <stdlib.h>

/**
 * _checked - allocated memory using malloc.
 * @b: Function int parameter.
 *
 * Return: void.
 */

void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
