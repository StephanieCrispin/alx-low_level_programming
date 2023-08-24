#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *tempValue;

    list_t *pointer = *head;
    unsigned int len;

    while (str[len])
        len++;

    tempValue = malloc(sizeof(list_t));
    if (tempValue == NULL)
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
    retun(tempValue);
}
