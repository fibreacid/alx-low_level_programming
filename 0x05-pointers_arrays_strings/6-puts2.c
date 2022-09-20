#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string, 
 * starting with the first character, followed by a new
 */

void puts2(char *str)
{
	int i = 0;

	/*local variable definition*/
	for (i = 0; i < 10; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}		
