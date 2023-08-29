#include "lists.h"

/**
 * add_nodeint_end - adds a node to the ending of the node list
 * @head: First Parameter
 * @n: The second Parameter for this function
 * Return: returns our new node to us
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *endNode;

	endNode = malloc(sizeof(listint_t));
	if (endNode == NULL)
		return (NULL);
	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = endNode;
	return (endNode);
}
