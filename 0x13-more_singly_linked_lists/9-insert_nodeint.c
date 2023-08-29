#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *newNode;
    unsigned int i = 0;
    listint_t *headPtr = *head;

    newNode = malloc(sizeof(listint_t));
    if (!newNode || head == NULL)
        return NULL;

    newNode->n = n;
    newNode->next = NULL;

    if (idx == '\0')
    {
        newNode->next = *head;
        *head = newNode;
        return (newNode);
    }

    while (headPtr && i < idx)
    {

        if (i == idx - 1)
        {
            newNode->next = headPtr->next;
            headPtr->next = newNode;
            return (newNode);
        }
        else
            headPtr = headPtr->next;

        i++;
    }

    return (NULL);
}
