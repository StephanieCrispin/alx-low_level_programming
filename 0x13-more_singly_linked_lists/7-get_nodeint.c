#include "lists.h"
/**
 * get_nodeint_at_index - This is supposed to get a node at a particular index
 * @head: First param
 * @index: Second param
 * Return: The node or NULL value if node is not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (node != NULL && i < index)
	{
		if (i == index)
		{
			break;
		}
		i++;

		node = node->next;
	}

	return (node ? node : NULL);
}
