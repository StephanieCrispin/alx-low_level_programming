#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *node = NULL;
    unsigned int i = 0;

    node = malloc(sizeof(listint_t));

    while (head && i <= index)
    {
        if (i == index)
        {
            node = head;
            break;
        }
        i++;

        head = head->next;
    }
    /*  if (!node)
      {
          return (NULL);
      }*/
    return (node);
}
