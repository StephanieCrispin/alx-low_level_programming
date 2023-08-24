#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *tempValue;

    list_t *pointer = *head;
    unsigned int len;

    len = 0;
    while (str[len])
        len++;

    tempValue = malloc(sizeof(list_t));
    if (!tempValue)
        return (NULL);
    tempValue->len = len;
    tempValue->str = strdup(str);
    tempValue->next = NULL;

    if (*head == NULL)
    {
        *head = tempValue;
        return (tempValue);
    }
    while (pointer->next)
    {
        pointer = pointer->next;
    }
    pointer->next = tempValue;
    return (tempValue);
}
