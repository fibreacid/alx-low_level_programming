#include <stdio.h>

/**
 * main - entry point
 *
 * decription - program that prints all possible different combinations of three digits.
 *
 * return 0;
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '8'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= 10; c++)
			{
				if (a != '7' && b != '8' && c != '9')
					continue;
				putchar(a);
				putchar(b);
				putchar(c);
				putchar(',');
				putchar(' ');
		}
	}
putchar('\n');
return(0);
}
