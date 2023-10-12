#include "lists.h"

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
