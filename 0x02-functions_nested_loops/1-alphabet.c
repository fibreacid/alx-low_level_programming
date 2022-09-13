#include "main.h"

/**
 * main -entry point
 *
 * description - program prints alphabets in lower case
 *
 * return 0;
 */

int main(void)
{
	char start = 'a';
	char end = 'z';

	char letters = start;

	while (letters != end)
	{
		_putchar(letters);
		_putchar('\n');
		letters++;
	}
	return (0);
}

