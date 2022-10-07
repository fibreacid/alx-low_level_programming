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
	int *stringAdd;

	if (s1 == NULL)
		s1[] = " ";

	if (s2 == NULL)
		s2[] = " ";

	stringAdd = malloc(sizeof(int) * n);

	if (stringAdd == NULL)
		return (NULL);

	int i;

	for (i = 0; i != '\0'; i++)
		s1[i] = strlen(s1);

	s1[i] = '\0';

	int length;

	for (length = 0; n >= s2[length]; length++)
		s2[length] = n;

	stringAdd = strcat(s1 , s2)
		return (stringAdd);
}
