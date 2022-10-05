#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -  returns a pointer to a new string which 
 * is a duplicate of the string str.
 * @str: origin of string.
 * Return: NULL if str = NULL.
 */

char *_strdup(char *str)
{
	char duplicate = strlen(str);

	str = malloc(sizeof(char) * duplicate);

	if (str == NULL)
		return (NULL);

	while (duplicate < str)
		str[duplicate] = '\0';

	return (str);
	free (str);
}
