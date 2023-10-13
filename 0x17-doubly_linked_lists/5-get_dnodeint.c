#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    if (!head)
        return (NULL);
    unsigned int count = 0;

    while (head)
    {
        head = head->next;
        count += 1;
        if (count == index)
            break;
    }
    if (index > count)
        return (NULL);
    return (head);
}