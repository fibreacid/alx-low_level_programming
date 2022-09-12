#include <stdio.h>



/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 47; a < 58; a++)
	{
		for (b = a; b < 58; b++)
		{
			if (a != 56 && b != 58)
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
