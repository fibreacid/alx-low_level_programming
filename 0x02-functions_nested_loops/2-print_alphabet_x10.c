#include "main.h"

/**
 * main - entry point
 *
 * Description - prints 10 timesthe alphabet in lowercase
 *
 * Return 0;
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char start = 'a';
	char end = 'z';

	char letter = start;

	while(count++ <= 9)
	{
		for (letter <= end)
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');
}
