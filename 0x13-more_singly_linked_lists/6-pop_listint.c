#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *headPtr;
	listint_t *holdHead;
	int number;
	if (*head == NULL || head == NULL)
		return (0);
	headPtr = malloc(sizeof(listint_t));
	if (headPtr == NULL)
		return (0);

	number = (*head)->n;
	holdHead = (*head)->next;
	free(*head);
	*head = holdHead;
	return (number);
}
