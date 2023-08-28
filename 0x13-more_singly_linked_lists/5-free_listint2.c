#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *headPtr = *head;
	if (*head == NULL)
	{
		return;
	}
	while (*head)
	{
		headPtr = (*head)->next;
		free(*head);
		*head = headPtr;
	}
}
