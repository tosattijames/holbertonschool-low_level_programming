#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @n: - number being passed
 * @head: - pointer to pointer to head of the list
 * Return: the address of the new element, or NULL if false
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *prev_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (prev_node == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (prev_node->next)
	{
	prev_node = prev_node->next;
	}

	prev_node->next = new_node;
	return (new_node);
}
