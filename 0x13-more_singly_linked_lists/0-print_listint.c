#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t num = 0;
    const listint_t *ptr = NULL;
    ptr = h;
    while (ptr != NULL)
    {
        printf("%d", ptr->n);
        num += 1;
        ptr = ptr->next;
    }
    return (num);
}
