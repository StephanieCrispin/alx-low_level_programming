#include "lists.h"

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
