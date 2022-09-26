#include "main.h"
#include <string.h>

/**
 *  _strspn - gets the length of a prefix substring.
 *  @s: number of bytes
 *  Return: s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		s[len] = accept[i];
	}
	return (s);
}
