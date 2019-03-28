#include "lists.h"

/**
 * reverse_listint - reverses list order
 *@head: pointer to head of list
  *Return: Returns: 1 if it succeeded, -1 if it failed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *prev;

	prev = NULL;

	if (*head == NULL && head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	while (*head != NULL)
	{
		current = (*head)->next;
		prev = *head;
		*head = current; /* advance node */
	}
	*head = prev;
	return (*head);
}
