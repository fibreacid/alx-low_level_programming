#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: swap charactor a to b
 * @b: swap charactor b to a
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
