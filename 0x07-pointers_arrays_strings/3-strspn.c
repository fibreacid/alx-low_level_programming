#include "main.h"
#include <string.h>

/**
 *  _strspn - gets the length of a prefix substring.
 *  @s: number of bytes
 *  Return: s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int len, index;

	while (i < len)
	{
		accept[i] = s[len + i];
		i++;
	}
}
