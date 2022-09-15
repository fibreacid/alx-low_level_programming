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

	if (i > 0)
		printf("%d is positive\n", i);
	
	else if (i == 0)
		printf("%d is zero\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);
}

