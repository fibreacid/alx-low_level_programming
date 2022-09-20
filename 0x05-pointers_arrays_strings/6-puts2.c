#include "main.h"

/**
 * puts2 - prints every other character of a string, 
 * starting with the first character, followed by a new
 */

void puts2(char *str)
{
	int i = 0;

	/*local variable definition*/
	for (i = 0; str[i] <= 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}		
