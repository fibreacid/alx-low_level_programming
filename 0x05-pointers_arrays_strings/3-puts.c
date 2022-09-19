#include "main.h"
#include <string.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: count while incrementing
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
