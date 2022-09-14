#include "main.h"
/**
 * main - Print the alphabet, in lowercase, followed by a new line.
 * Description: Print the alphabet in lowercase followed by a new line.
 * Return: 0
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
	}
	_putchar('\n');
}

