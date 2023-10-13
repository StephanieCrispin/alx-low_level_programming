#include "lists.h"
/**
 * sum_dlistint - shows sum of all the data (n) in a Doubly L.
 * @head: a pointer to the head of the DLL
 * Return: the sum of all data of the DLL or 0 if is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
