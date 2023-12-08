#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * @h: the head parameter
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);

