#include "lists.h"

/**
 * list_len -  Returns the number of elements in a linked list_t list.
 * @h: head pointer
 *
 * Return: Number of elements
 */


size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t counter = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp != NULL)
		{
			temp = temp->next;
		}
		counter++;
	}

	return (counter);

}
