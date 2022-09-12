#include <stdio.h>



/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 47; a < 57; a++)
	{
		for (b = a; b < 57; b++)
		{
			if (a != 56 && b != 57)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
