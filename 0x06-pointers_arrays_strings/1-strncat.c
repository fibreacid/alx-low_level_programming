#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @src: string to be appeneded to dest.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned char length, j;

	length = 0;

	while (dest[length + 1] < n)
	{
		length++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		length++;
		dest[length + 1] = src[j];
	}

	dest[length + 1] = '\0';
	return (dest);
}
