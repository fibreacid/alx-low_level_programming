#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 */

int _strlen(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; ++i)
	{
		++s;
	}
	return (i);
}
