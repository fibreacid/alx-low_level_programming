#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: input.
 * Return: always 0.
 */

void _print_rev_recursion(c)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
