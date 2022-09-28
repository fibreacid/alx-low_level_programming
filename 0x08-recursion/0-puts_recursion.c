#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: input.
 * Return: string.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s - 1);
		_putchar(*s);
	}
	_putchar('\n');
}
