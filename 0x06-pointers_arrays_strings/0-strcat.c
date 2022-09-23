#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenates two strings. dest the destination,
 * src the source.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: number of bytes.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
		j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
