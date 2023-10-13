#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count = 0;

    if (head == NULL)
        return (NULL);

    while (head)
    {
        if (count == index)
            return (head);
        head = head->next;
        count += 1;
    }

    return (NULL);
}