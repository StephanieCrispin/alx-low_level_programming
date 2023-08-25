#include "lists.h"
#include <string.h>
/**
 * add_node -> This functio takes adds node to beginning of list
 * @head: My first function parameter:type of list
 * @str: My Second function parameter with type of char *
 * Return: my function returns a list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *firstItem;
	unsigned int len = 0;

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
