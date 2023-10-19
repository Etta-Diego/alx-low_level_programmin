#include "lists.h"


/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Elements to print
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		counter++;

	}

	return (counter);
}
