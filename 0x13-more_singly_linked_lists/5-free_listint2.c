#include "lists.h"

/**
 * free_listint2 - Frees my node list
 * @head: First Parameter
 * Return: returns our new node to us
 */

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
