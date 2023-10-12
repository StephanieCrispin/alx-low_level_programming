#include "lists.h"

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
