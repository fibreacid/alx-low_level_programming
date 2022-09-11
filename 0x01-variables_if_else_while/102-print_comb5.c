#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99,numbers seperated
 *
 * Return: 0
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit2 < 10; digit1++)
	{
		putchar((digit1 % 10) + '0');
		putchar((digit2 % 10) + '0');

		if (digit1 == 9 && digit2 == 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
