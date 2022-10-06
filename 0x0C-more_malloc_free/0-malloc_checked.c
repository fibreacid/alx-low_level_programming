#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *pts;

	pts = malloc(b);

	if (pts == NULL)
		exit(98);

	return (pts);
}
