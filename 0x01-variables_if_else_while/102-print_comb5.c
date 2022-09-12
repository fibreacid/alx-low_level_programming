#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99,numbers seperated
 *
 * Return: 0
 */

int main(void)
{
	int digit1, digit2, digit3, digit4;

	for (digit1 = 48; digit1 < 56; digit1++)
	{
		for (digit2 = 48; digit2 < 57; digit2++)
		{
			for (digit3 = digit1 + 1; digit3 < 58; digit3++)
			{
				for (digit4 = 48; digit4 < 59; digit4++)
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
