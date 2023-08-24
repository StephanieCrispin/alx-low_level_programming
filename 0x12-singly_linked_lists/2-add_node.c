#include "lists.h"
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
    unsigned int len = 0;
    list_t *firstItem;

    while (str[len] != '\0')
        len++;

    firstItem = malloc(sizeof(list_t));
    if (!firstItem)
        return (NULL);

    firstItem->len = len;
    firstItem->str = strdup(str);
    firstItem->next = (*head);
    (*head) = firstItem;

    return (*head);
}
