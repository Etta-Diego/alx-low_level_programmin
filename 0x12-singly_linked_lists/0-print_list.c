#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Elements to print
 * 
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t counter = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else 
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}

		temp = temp->next;
		counter++;

	}

	return counter;
}
