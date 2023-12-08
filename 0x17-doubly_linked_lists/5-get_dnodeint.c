#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the first node
 * @index: position of the node.
 * 
 * Return: the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	struct dlistint_s *temp;
	size_t count;

	temp = head;
	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}

	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
		if (count == index)
		{
			return (temp);
		}
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
