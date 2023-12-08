#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of the linked list
 * @n:  new data of the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s *new;

	new = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
		new->next = (*head);
	}
		(*head) = new;
	return (*head);
}
