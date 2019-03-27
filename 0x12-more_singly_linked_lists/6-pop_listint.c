#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: - pointer to pointer to head of the list
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	num = current->n;
	*head = current->next;
	free(current);

	return (num);
}
