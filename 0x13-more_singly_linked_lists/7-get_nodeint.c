#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *node = head;
    unsigned int i = 0;

    while (node != NULL && i < index)
    {
        if (i == index)
        {
            node = head;
            break;
        }
        i++;

        head = head->next;
    }

    return (node ? node : NULL);
}
