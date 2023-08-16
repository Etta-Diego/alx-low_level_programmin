#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 * @array: int array pointer
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0 if false, -1 if true, index (if cmp does not return 0)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int x;
while (array == NULL || size == 0 || cmp == NULL)
{
	return (-1);
}

	x = 0;
	while (x < size)
	{
		if (cmp(*(array + x)))
			return (x);
		x++;

	}

	return (-1);

}
