#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *newNode = NULL;
    unsigned int i = 0;
    listint_t *headPtr = *head;

    newNode = malloc(sizeof(listint_t));
    if (!newNode || head == NULL)
        return NULL;

    newNode->n = n;
    newNode->next = NULL;

    if (idx > 0)
    {
        while (headPtr && i <= idx)
        {
            if (i == idx)
            {
                newNode->next = headPtr->next;
                headPtr->next = newNode;
                break;
            }
            headPtr = headPtr->next;
            i++;
        }
    }
    else if (idx == 0)
    {
        headPtr->next = *head;
        *head = headPtr;
    }

    return (newNode ? newNode : NULL);
}
