#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    /*dlistint_t *temporary = head;*/
    unsigned int count = 0;

    if (head == NULL)
        return (NULL);
    /*I honestly dont know the reasonf for the assignment*/
    /* temporary->n = head->n;*/
    while (head)
    {
        if (count == index)
            return (head);
        head = head->next;
        count += 1;
    }

    return (NULL);
}