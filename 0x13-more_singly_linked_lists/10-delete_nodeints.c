#include "lists.h"
#include <stdlib.h>


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp;
	listint_t *ptr;
	unsigned int  i;

	if (head == NULL || *head == NULL)
	{
		return -1;
	}
ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		 ptr = NULL;
		return (1);
	}
	temp = *head;

	i = 0;
	for (; i < index - 1; i++)
	{
		if (temp->next == NULL)
		{
			return -1;
		}
temp = 
		temp = temp->next;

	}

	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);

	return (1);
}
