#include "main.h"

/**
 * swap_int - swap the value of the two integer a, b
 * @a: first int to swap
 * @b: second int to swap
 *
 * Rturn: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
