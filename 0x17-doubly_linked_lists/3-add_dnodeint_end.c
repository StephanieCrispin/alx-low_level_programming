#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of a DLL
 * @head: double pointer to the beggining of the list
 * @n: content of the new node to be added to Double .L
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temporary;

	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	newNode->next = NULL;

	if ((*head) == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	temporary = *head;

	while (temporary->next != NULL)
	{
		temporary = temporary->next;
	}
	temporary->next = newNode;
	newNode->prev = temporary;

	return (newNode);
}
