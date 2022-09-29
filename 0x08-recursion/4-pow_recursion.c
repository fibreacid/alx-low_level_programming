#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @y: input
 * Return: negative one if y is less than zero.
 */

int _pow_recursion(int x, int y)
{
	int base = x;

	if (y < 0)
	{
		return (-1);
	}
	else 
	{
		base *= _pow_recursion(y - 1);
		return (base);
	}
}
