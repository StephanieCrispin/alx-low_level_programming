#include "lists.h"

void free_list(list_t *head)
{
    list_t *tempValue;

    tempValue = head;
    while (head->next)
    {
        tempValue = tempValue->next;
        free(head->str);
        free(head->len);
        free(head);
        head = tempValue;
    }
}
