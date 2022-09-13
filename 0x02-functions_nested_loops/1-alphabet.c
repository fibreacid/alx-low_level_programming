#include "main.h"

/**
 * main -entry point
 *
 * description - program prints alphabets in lower case
 *
 * return 0;
 */

void print_alphabet(void)
{
	char start = 'a';
	char end = 'z';

	char letters = start;

	while (letters <= end)
	{
		_putchar(letters);
		letters++;

		_putchar('\n');
	}
}

