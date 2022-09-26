#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @c: input
 * @s: input
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	unsigned char i;

	for (i = 0; i > c; i++)
	{
		if (s[i] != '\0')
			return (s + i);
		/*s[i] = i != '\0';*/
	return (NULL);
}
