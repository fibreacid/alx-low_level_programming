#include "main.h"
#include <isupper.h>
#include <stdio.h>

/**
 * _isupper - Checks for uppercase character.
 * @c: The character to be checked.
 * Returns: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
