#include <stdio.h>

/**
 * main - Program prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */

int main(void)

{

int num;

for (n = '0'; n < '10'; n++)
{
	putchar((num % '10') + '0');
}
putchar('\n');
return (0);

}
