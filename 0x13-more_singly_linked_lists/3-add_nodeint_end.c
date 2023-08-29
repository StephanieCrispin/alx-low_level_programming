#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *endNode;

	endNode = malloc(sizeof(listint_t));
	if (endNode == NULL)
		return NULL;
	ptr = *head;
	endNode->n = n;

	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}
	while (ptr)
	{
		ptr = ptr->next;
	}
	ptr->next = endNode;
	return (endNode);
}
