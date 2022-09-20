#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string, 
 * starting with the first character, followed by a new
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
		/*_putchar(str[i]);*/
	}
	_putchar('\n');
}		
