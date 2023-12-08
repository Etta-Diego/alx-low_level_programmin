#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first node
 * @n: new data value to be entered
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	struct dlistint_s *new_node, *temp;

	new_node = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));
		if (new_node == NULL)
		{
			return (NULL);
		}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	temp = (*head);
	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		/*return (*head)*/
	}
	else
	{
		temp = (*head);
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (*head);
}
