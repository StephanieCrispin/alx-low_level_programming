#include "lists.h"

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
