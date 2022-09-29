#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input
 * Return: negative one if n does not have a natural 
 * square root
 */

int _sqrt_recursion(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		result /= _sqrt_recursion(n - 1);
		return (result);
	}
}
