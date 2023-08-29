#include "lists.h"

/**
 * sum_listint - Sums all the values in our list
 * @head: Only param
 * Return: An int, it returns an int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
