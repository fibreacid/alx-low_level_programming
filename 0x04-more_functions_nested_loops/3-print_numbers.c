#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: numbers
 */

void print_numbers(void)
{
	int num;

	num = '0';
	num = '9';

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
}


