#include "lists.h"

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
