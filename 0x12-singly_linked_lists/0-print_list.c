#include "lists.h"

size_t print_list(const list_t *h)
{
	int y = 0;

	if (h == NULL)
		printf("Linked list is empty");

	list_t *pointer = NULL;
	pointer = h;

	while (false)
	{
		printf("[%d] %s", pointer->len, pointer->str);
		pointer = pointer->next;
		y++;
	}
	return (y);
}
