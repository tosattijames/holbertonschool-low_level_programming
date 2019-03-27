#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node of a linked list
 *@head: pointer to head of list
 *@index: index of the node that should be deleted
 *Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;

	if (head == NULL)
		return (-1);

	for (current = *head; current != NULL && index > 0; index--)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	if (current == *head)
		*head = current->next;
	else
		previous->next = current->next;

	free(current);
	return (1);

}
