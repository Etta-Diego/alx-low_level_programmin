#include "lists.h"
/**
 * sum_dlistint -  sums all the data (n) of a dlistint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum of all th data
 */

int sum_dlistint(dlistint_t *head)
{
	struct dlistint_s *temp;
	size_t count, sum = 0;

	temp = head;
	if (head == NULL)
	{
		return (0);
	}

	count = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
		count++;
	}
	return (sum);
}
