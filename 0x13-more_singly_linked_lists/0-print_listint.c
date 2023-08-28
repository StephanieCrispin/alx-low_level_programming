#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t num = 0;
    const listint_t *ptr = h;

    while (ptr)
    {
        ptr = ptr->next;
        num += 1;
    }
    return (num);
}
