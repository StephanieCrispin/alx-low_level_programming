#include "lists.h"

/**
 * listint_len - Returns length of list
 * @h: only Param;
 * Return: returns a size
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb += 1;
		h = h->next;
	}
	return (numb);
}
