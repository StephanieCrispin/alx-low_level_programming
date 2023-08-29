#include "lists.h"

/**
 * add_nodeint - adds a node to the begginning of the node list
 * @head: First Parameter
 * @n: The second Parameter for this function
 * Return: returns our new node to us
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *numb;

	numb = malloc(sizeof(listint_t));
	if (numb == NULL)
		return (NULL);

	numb->n = n;
	numb->next = *head;
	*head = numb;

	return (numb);
}
