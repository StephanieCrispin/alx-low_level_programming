#include "lists.h"
/**
 * print_dlistint - print  out all the elements of a dlistint_t list completely
 * @h: pointer to the head of the list
 * Return: the number of nodes type size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len += 1;
	}
	return (len);
}
