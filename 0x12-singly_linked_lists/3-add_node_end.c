#include "lists.h"
/**
 * add_node_end-> My function adds a node to the end of the list.
 * @head: First parameter;
 * @str:Second parameter
 * Description: This function takes in a head and a str
 * It intialises the new node with passed in string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tempValue;
	unsigned int z;

	list_t *pointer = *head;

	z = 0;
	while (str[z])
		z++;

	tempValue = malloc(sizeof(list_t));
	if (!tempValue)
		return (NULL);
	tempValue->len = z;
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
