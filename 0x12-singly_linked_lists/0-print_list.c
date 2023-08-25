#include "lists.h"
/**
 * print_list -> My function prints out a list
 * @h: The one and only parameter
 * Description: This function prints out a list and its length
 * Return: an integer that represent size of the list to size_t
 */
size_t print_list(const list_t *h)
{
	size_t y = 0;

	const list_t *pointer = NULL;

	pointer = h;

	while (pointer)
	{
		if (!pointer->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", pointer->len, pointer->str);
		pointer = pointer->next;
		y++;
	}
	return (y);
}
