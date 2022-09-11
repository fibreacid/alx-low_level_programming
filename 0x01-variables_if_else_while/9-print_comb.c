#include <stdio.h>

/**
 * main - printing numbers from 0-9 with commas and space between them
 *
 * Description: using the main function
 *
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');

return (0);
}
