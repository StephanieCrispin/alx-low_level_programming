#include "lists.h"

void free_list(list_t *head)
{
    list_t *tempValue;

    tempValue = head;
    while (tempValue)
    {
        tempValue = tempValue->next;
        free(tempValue->str);
        free(tempValue);
        head = tempValue;
    }
}
