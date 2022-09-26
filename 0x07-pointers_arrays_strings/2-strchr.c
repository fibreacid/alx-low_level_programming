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
	while (*s != '\n')
	{
		if (*s == c)
			return (char *s);
		s++;
	}
	return (NULL);
}
