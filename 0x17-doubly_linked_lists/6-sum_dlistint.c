#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
    int count = 0;

    if (head == NULL)
        return (0);

    while (head)
    {
        count += head->n;
        head = head->next;
    }
    return (count);
}