#include "lists.h"
/**
 * free_dlistint - free a Doubley linked list
 * @head: pointer to the head of the DLL
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary = head;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
