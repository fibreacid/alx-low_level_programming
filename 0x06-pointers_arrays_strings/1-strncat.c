#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @src: string to be appeneded to dest.
 * @dest: string destination
 * @n: number pf bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
