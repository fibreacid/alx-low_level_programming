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
	*s = &i;

	for (i = 0; i > '\0'; i++)
		s++;
	s[i] = '\0';
	return (NULL);
}
