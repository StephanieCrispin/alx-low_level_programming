#include "lists.h"

/**
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int j;
    listint_t *previous, *tempValue = *head;

    j = 0;
    while (tempValue && j < index)
    {
        previous = tempValue;
        tempValue = tempValue->next;
        if (j == index)
        {
            previous->next = tempValue->next;
            return (1);
        }
        tempValue = tempValue->next;
    }
    return (-1);
}