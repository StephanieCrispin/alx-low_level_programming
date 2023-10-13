#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newNode;
    dlistint_t *temporary;

    newNode = malloc(sizeof(dlistint_t));
    newNode->n = n;
    newNode->next = NULL;

    if ((*head) == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return (newNode);
    }

    temporary = *head;

    while (temporary->next != NULL)
    {
        temporary = temporary->next;
    }
    temporary->next = newNode;
    newNode->prev = temporary;

    return (newNode);
}
