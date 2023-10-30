#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	unsigned int i;
	listint_t *temp;
	listint_t *ptr;

	if (head == NULL)
	{
		return NULL;
	}

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	temp = *head;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	if (idx != 0)
	{
		idx--;
		i = 0;
		while (i < idx)
		{
			if (temp->next == NULL)
			{
				return NULL;
			}
			/**head = temp;*/
			temp = temp->next;
i++;
		}
	}
	ptr->next = temp->next;
	temp->next = ptr;

	return (ptr);
}
