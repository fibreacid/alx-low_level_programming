#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes 
 *
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
