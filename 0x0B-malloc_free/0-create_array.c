#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	if (ptr == 0)
	{
		return (0);
	}
	ptr  = ((int*)malloc(sizeof(char)));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
