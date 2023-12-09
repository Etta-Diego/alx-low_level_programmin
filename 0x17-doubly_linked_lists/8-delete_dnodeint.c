#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index index of a dlistint_t linked list.
 * @head: pointer to the first node
 * @index: position of node to be deleted
 *
 * Return: 1 if successful, -1 if otherwise.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	struct dlistint_s *temp, *tp;
	size_t count;
	if ((*head) == NULL)
	{
		return -1;
	}
	temp = (*head);
	if (index == 0 && (*head) != NULL)
	{
		(*head) = temp->next;
		free(temp);
/*	if ((*head) != NULL)
		{
		(*head)->prev = NULL;
	}*/
	}
	count = 0;
	while (temp != NULL)
	{
		tp = temp->next;
		if (count == index)
		{
			if (temp->prev != NULL)
			{
				temp->prev->next = temp->next;
			}
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			free(temp);
		}
		temp = tp;
		count++;
	}
	if (count < index)
	{
		return -1;
	}
	return 1;
}
