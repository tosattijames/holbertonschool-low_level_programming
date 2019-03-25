#include "lists.h"

/**
 * print_listint - prints all the elements in list_t
 * @h: ointer to head of the linked list
 * Return: the number nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *list = h;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next; /*iterate */
		i++;
	}
	return (i);
}
