#include <stdio.h>



/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b < '9'; b++)
		{
			if (a == '8' && b == '9')
				continue;
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
