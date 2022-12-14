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

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
