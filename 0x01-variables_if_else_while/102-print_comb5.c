#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99,numbers seperated
 *
 * Return: 0
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 627; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 627; digit2++)
		{
			putchar(digit1);
			putchar(digit2);

			if (digit1 != 627 && digit2 != 627)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');

return (0);
}
