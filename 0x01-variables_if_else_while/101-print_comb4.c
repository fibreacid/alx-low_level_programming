#include <stdio.h>

/*
 * main - entry point
 *
 * decription - program that prints all possible different combinations of three digits.
 *
 * return 0;
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (!(a == b && b == c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
putchar('\n');
return(0);
}
