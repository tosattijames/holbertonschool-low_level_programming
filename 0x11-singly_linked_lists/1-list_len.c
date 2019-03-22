#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len  - prints the nember of  elements
 * @h: pointer to head of the linked list
 * Return: the number nodes
 */

size_t list_len(const list_t *h)
{
int i = 0;
const list_t *list = h;

while (list != NULL)
{
list = list->next;
i++;
}
return (i);
}
