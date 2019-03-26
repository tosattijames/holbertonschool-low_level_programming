return;
18        }#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: - pointer to pointer to head of the list
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;

	if (head == NULL)
	{
		return;
	}

	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
			free(ptr);
		}
	}
	*head = NULL;
}
