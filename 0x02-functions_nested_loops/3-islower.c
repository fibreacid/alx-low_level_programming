#include "main.h"
/**
 * _islower - Checks for lowercase character
 * Description: checks for lowercase character
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
