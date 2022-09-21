#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: appends the src string to dest string, overwriting the
 * terminating null byte (\0) at the end of dest.
 * @dest: adds a terminating null byte
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	unsigned char length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		length++;
		dest[length] = src[j];
	}

	dest[length] = '\0';

	return (dest);
}
