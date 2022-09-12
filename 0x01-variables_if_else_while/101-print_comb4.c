#include <stdio.h>

/**
 * main - entry point
 *
 * Decription - program prints possible different combinations of three digits.
 *
 * return 0;
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 55; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				if (a != 55 && b != 56 && c != 57)

				putchar(a);
				putchar(b);
				putchar(c);
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
