#include "lists.h"
/**
 * print_listint-> prints out a list of node values
 * @h: Only parameter in func
 * Return: returns the size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		num += 1;
		ptr = ptr->next;
	}
	return (num);
}
