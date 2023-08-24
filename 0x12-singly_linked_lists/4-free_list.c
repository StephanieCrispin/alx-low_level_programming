#include "lists.h"

void free_list(list_t *head)
{
    list_t *tempValue;

    tempValue = head;
    while (head)
    {
        tempValue = head->next;
        free(head->str);
        free(head);
        head = tempValue;
    }
}
