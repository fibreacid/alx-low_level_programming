#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - Tests function that prints if integer,
 *                        is positive or negative.
 *
 * Return: Positive or Negative
 */
int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%i is negative", i);
	}
	return (0);
}

