#include "lists.h"

/**
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int j;
    listint_t *tempValue = *head, *currValue = NULL;

    if (*head == NULL)
        return (-1);

    if (index = 0)
    {
        *head = (*head)->next;
        free(tempValue);
        return (1);
    }

    j = 0;
    index = index - 1;
    while (j < index)
    {
        if (tempValue == NULL || tempValue->next == NULL)
            return (-1);
        tempValue = tempValue->next;
        j++;
    }

    currValue = tempValue->next;
    tempValue->next = currValue->next;
    free(currValue);
    return (-1);
}
