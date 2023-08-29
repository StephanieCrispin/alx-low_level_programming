#include "lists.h"

/**
 *  free_listint - Frees my node list
 * @head: First Parameter
 * Return: returns our new node to us
 */

void free_listint(listint_t *head)
{
	listint_t *headPtr = head;

	while (head)
	{
		headPtr = head->next;
		free(head);
		head = headPtr;
	}
}
