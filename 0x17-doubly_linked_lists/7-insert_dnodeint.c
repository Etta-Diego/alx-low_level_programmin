#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
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
	struct dlistint_s *new_node, *current_node;
	unsigned int count;

	if (*h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(struct dlistint_s));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	current_node = *h;
	for (count = 0; current_node != NULL && count < idx - 1; count++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	new_node->prev = current_node;
	if (current_node->next != NULL)
	{
		current_node->next->prev = new_node;
	}
	current_node->next = new_node;
	return (new_node);
}
