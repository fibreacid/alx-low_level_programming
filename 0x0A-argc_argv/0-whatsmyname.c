#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: program prints its name followed by new line.
 */

int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n", argc);
	printf("let's see whats in argv[]\n");

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
