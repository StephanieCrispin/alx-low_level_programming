#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temporary = head;

    while (head)
    {
        temporary = head->next;
        free(head);
        head = temporary;
    }
}