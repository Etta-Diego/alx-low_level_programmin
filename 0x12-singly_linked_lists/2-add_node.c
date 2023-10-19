#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head pointer
 * @str: character element
 * Return: The address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = (struct list_s *)malloc(sizeof(struct list_s));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next  = *head;
	*head = newNode;

	return (newNode);
}
