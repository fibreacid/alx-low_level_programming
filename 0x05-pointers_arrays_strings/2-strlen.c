#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: increment 
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
