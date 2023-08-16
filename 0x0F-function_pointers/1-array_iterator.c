#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function given on each element of an array.
 * @array: Type int array pointer
 * @size: Type size of the array
 * @action: Type pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
		size_t x;
	while (array != NULL || action != NULL || size != 0)
	{

	x = 0;
	while (x < size)
	{
		action(array[x]);
		x++;
	}
array = NULL;
action = NULL;
size = 0;
	}
}
