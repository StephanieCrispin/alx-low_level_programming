#include "lists.h"
/**
 * list_len -> My function returns a length of a list
 * @h: The only parameter
 * Description: h refers to the list passed in
 * Return: returns a number (size)
 */
size_t list_len(const list_t *h)
{

	size_t y = 0;

	const list_t *pointer = NULL;

	pointer = h;
	while (pointer)
	{
		pointer = pointer->next;
		y++;
	}
	return (y);
}
