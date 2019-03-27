#include "lists.h"
/**
 * sum_listint - add sum of nodes in the list
 * @head: pointer to head of list
 * Return: data
 **/

int sum_listint(listint_t *head)
{
	int data = 0;
	listint_t *current;

	if (head == 0)
		return (0);

	while (head != NULL)
	{
		current = head;
		head = current->next;
		data += current->n;
	}

	return (data);
}
