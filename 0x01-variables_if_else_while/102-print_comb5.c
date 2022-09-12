#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99,numbers seperated
 *
 * Return: 0
 */

int main(void)
{
	int digit1, digit2, digit3, digit4;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
		for (digit2 = 48; digit2 < 58; digit2++)
		{
			for (digit3 = digit1; digit3 < 60; digit3++)
			{
				for (digit4 = 48; digit4 < 58; digit4++)
				{
					/*if (digit1 != '9' && digit2 != '9' && digit3 != '9' && digit4 != '9')*/
					if (!(digit1 == digit2 && digit3 == digit4))
					{
						putchar(digit1);
						putchar(digit2);
						putchar(' ');
						putchar(digit3);
						putchar(digit4);
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
