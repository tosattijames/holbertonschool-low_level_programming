#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: - pointer to pointer to head of the list
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = *head;
		head = head->next;
		free(ptr);
	}
}
