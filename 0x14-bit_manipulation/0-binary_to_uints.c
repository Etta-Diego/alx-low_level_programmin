#include "main.h"

/**
 *
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int i, j;

	if (b == 0)
	{
		return 0;
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return 0;
		}
	}

j = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
		{
			j++;
		}
	}

	return j;
}
