#include "main.h"
#include <stdio.h>

/**
 * factorial - returns a factorial of a given number.
 * @n: input.
 * Return: -1 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 1)
	{
		return  (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
