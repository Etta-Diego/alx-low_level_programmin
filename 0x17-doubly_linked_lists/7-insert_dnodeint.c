#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the first node
 * @idx: position to insert the new node
 * @n: data to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	struct dlistint_s *temp, *new_node, *current_node;
	size_t count;

	if (*h == NULL)
	{
		return NULL;
	}
	new_node = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));
	if (new_node == NULL)
	{
		return (NULL);
	}
	temp = (*h);
	count = 0;
	new_node->next = NULL;
	new_node->n = n;
	new_node->prev = NULL;
	if (idx == 0 && *h != NULL)
	{
		new_node->next =(*h);
		new_node->prev = NULL;
		(*h)->prev = new_node;
		(*h) = new_node;
	}
	else
	{
	while (temp->next != NULL)
	{
		if (count == idx)
		{
			current_node = temp->next;
			temp->next = new_node;
			current_node->prev = new_node;
			new_node->next = current_node;
			new_node->prev = temp;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	}
	if (temp->next == NULL)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
