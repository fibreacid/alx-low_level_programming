#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	unsigned int n;
	int *pts;

	pts = (int*)malloc(n * sizeof(int));

	if (pts == NULL)
		return (0);

	for (int i = 0; i < n; ++n)
		pts[i] = b;

	return (pts);
}
