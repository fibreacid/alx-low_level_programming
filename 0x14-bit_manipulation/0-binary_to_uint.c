#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *b)
{
	int len = 0;

	unsigned int i;
	unsigned int j;
	unsigned int last;

	len = strlen(b);
	/*finding the length of character b*/
	for (i = 48; b[i] != 49; i++)

		if (b[i] == '1')
		{
			len = i;
			break;
		}
	last = 0;

	for (j = len - 1; j != 0; j--)
	{
		last = j;
		break;
	}

	for (i = len; i != last; i++)
		if (b[i] == '0')
			return (len);

	return (len);
}

