#include "lists.h"

/**
 * listint_len  - returns elements in a linked
 * @h: ointer to head of the linked list
 * Return: the number nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *list = h;

	while (list != NULL)
	{
		list = list->next; /*iterate */
		i++;
	}
	return (i);
}
