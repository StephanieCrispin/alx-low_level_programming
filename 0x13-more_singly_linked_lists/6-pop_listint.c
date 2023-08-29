#include "lists.h"

/**
 * pop_listint - Its supposed the node at a paticular index and return its value
 * @head: One and only parameter
 * Return: returns an integer
 */

int pop_listint(listint_t **head)
{
	listint_t *holdHead;

	int number;

	if (*head == NULL || head == NULL)
		return (0);
	number = (*head)->n;
	holdHead = (*head)->next;
	free(*head);
	*head = holdHead;
	return (number);
}
