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
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
	{
		++len;
	}

	mem = malloc(sizeof(char) * (len + 1));

	if (mem == NULL)
		return (NULL);

	len = 0;


	for (index = 0; s1[index] != '\0'; ++index)
	{
		mem[len++] = s1[index];
	}

	for (index = 0; s2[index] && index < n; index++)
		mem[len++] = s2[index];

	mem[len] = '\0';

	return (mem);
}
