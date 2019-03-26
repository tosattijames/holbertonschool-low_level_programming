#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: - pointer to pointer to head of the list
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;



	while (*head)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
}
