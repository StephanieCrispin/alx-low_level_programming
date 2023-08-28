#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *newNode = NULL;
    int i = 0;

    newNode = malloc(sizeof(listint_t));
    if (!newNode || head == NULL)
        return NULL;

    newNode->n = n;

    while (*head && i <= idx)
    {
        if (i == idx)
        {
            newNode->next = (*head)->next;
            (*head)->next = newNode;
            break;
        }
        *head = (*head)->next;
        i++;
    }
    if (!newNode)
        return NULL;
    return (newNode);
}
