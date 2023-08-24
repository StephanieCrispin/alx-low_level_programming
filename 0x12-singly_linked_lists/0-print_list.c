#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t y = 0;
	const list_t *pointer = NULL;

	if (h == NULL)
		printf("Linked list is empty");
	pointer = h;

	while (pointer != NULL)
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
