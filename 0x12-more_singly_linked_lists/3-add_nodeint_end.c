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
	listint_t *end_node;

	new_node = malloc(sizeof(listint_t));
	end_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}

		end_node->next = new_node;
	}
	new_node->n =  n;
	return (end_node);
}
