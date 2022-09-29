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
	if (n > 1)
	{
		return (n + _sqrt_recursion(n - 1));
	}
}
