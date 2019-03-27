#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: - pointer to pointer to head of the list
 * @index: - is the index of the node
 * Return: Return nth node, If node does not exist return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	current = head;

	while (counter <= index && head != NULL)
	{
		current = head;
		head = current->next;
		counter++;
	}

        if (index > counter)
		return (NULL);

	return (current);
}
