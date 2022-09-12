#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99,numbers seperated
 *
 * Return: 0
 */

int main(void)
{
	int digit1, digit2, digit3, digit4;

	for (digit1 = '0'; digit1 < '9'; digit1++)
	{
		for (digit2 = '0'; digit2 < '9'; digit2++)
		{
			for (digit3 = '0'; digit3 < '9'; digit3++)
			{
				for (digit4 = '0'; digit4 < '9'; digit4++)
				{
					if (digit1 != '9' && digit2 != '9' && digit3 != '9' && digit4 != '9')
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
	putchar('\n')
	
	return (0);
}

