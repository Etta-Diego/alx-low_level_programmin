#include "main.h"


void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		EXIT 98
	}

	free *ptr;

}
