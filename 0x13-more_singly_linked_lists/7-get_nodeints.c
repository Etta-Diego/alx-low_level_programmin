#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *temp = head;
	unsigned  int counter;

/*	if (head == NULL)
	{
		return NULL;
	}
*/
	counter = 0;

	while (counter < (index - 1))
	{
	/*	temp = temp->next;
		counter++;
		
*/if (temp->next != NULL)
		{
			return NULL;
		}
		head = temp->next;
		  counter++;
		 }
head = 
		return (head);
	}
