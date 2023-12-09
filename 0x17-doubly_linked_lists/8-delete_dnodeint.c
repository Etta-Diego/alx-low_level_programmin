#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index index
 * of a dlistint_t linked list.
 * @head: pointer to the first node
 * @index: position of node to be deleted
 *
 * Return: 1 if successful, -1 if otherwise.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	struct dlistint_s *temp;
	size_t count;

	if ((*head) == NULL)
	{
		return (-1);
	}
	temp = (*head);
	count = 0;
	while (temp != NULL)
	{
		if (count == index)
		{
			if (temp == *head)
			{
				(*head) = temp->next;
			}
			if (temp->prev != NULL)
			{
				temp->prev->next = temp->next;
			}
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	if (count < index)
	{
		return (-1);
	}
	return (-1);
}
