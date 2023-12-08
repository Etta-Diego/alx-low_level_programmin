#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the first node.
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	struct dlistint_s *temp;

	temp = head;
	if (head == NULL)
	{
		return;
	}
	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}
