#include "lists.h"

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
