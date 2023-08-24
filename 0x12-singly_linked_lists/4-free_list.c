#include "lists.h"
/**
 * free_list-> My function frees a list enttered as input
 * @head: this is the argument that is passed in
 * The head argument takes the head of the list
 * It sets the iist to a temporary value and frees the list
 */
void free_list(list_t *head)
{
	list_t *tempValue;

	tempValue = head;
	while (head)
	{
		tempValue = head->next;
		free(head->str);
		free(head);
		head = tempValue;
	}
}
