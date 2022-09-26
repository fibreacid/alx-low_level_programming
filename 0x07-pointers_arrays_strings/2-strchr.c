#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @c: input
 * @s: input
 * return: c
 */

char *_strchr(char *s, char c)
{
	unsigned char i;

	for (i = 0; i < c; i++)
		s[i] = '\0';
	return (s);
}
