#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int n;
	int *pts;

	pts = (int*)malloc(n * sizeof(int));

	if (pts == NULL)
		return (98);

	for (int i = 0; i < n; ++n)
		pts[i] = b;

	return (pts);
}
