#include "lists.h"
/**
 * get_dnodeint_at_index - show us a specific node of a Doubly L.
 * @head: a pointer to the head of the DLL
 * @index: index of the node to return its value (main = index 5 = 98)
 * Return: value of the node in the index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count += 1;
	}

	return (NULL);
}
