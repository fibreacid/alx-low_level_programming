#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: input.
 * Return: string.
 */

void _puts_recursion(char *s)
{
	size_t length = strlen(s);
	size_t x = 0;

	for (; x < length; x++)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
