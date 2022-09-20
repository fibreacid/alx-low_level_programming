#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int index;
	int length = 0;


	while (s++)
	{
		length++;
	}
	length--;

	for (index = 0; *s != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
