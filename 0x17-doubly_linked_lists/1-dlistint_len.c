#include "lists.h"
/**
 * dlistint_len - show us the number of elements in a double L. list
 * @h: points to the head of the DLL
 * Return: the number of elements in a DLL or empty
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len += 1;
	}
	return (len);
}
