#include "main.h"
#include <string.h>

/*
 * string_nconcat - concatenates two strings.
 * @s1: input
 * @s2: input
 * return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int *mem;
	int len, j;

	mem = malloc(n);

	while (s1[len] != '\0')
	{
		++len;
	}

	for (j = 0; s2[j] != '\0'; ++j; ++len)
	{
		s1[len] = s2[j];
	}
	s1[len] = '\0';

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		len++;

	return (mem);
}
