#include "lists.h"
/**
 * sum_listint - add sum of nodes in the list
 * @head: pointer to head of list
 * Return: data
 **/

int sum_listint(listint_t *head)
{
	int data = 0;
	listint_t *ptr;
	
	if(head == 0)
		return (0);

	while (head != NULL)
	{
		ptr = head;
		head = ptr->next;
		data += ptr->n;

	}

	return (data);
}
