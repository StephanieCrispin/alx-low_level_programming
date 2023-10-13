#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly L. list
 * @head: a double pointer to the head of the doubly L. list
 * @n: content of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
