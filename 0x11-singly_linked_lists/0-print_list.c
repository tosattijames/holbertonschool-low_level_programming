#include "lists.h"

/**
 * print_list - prints all the elements in list_t
 * @h: pointer to head of the linked list
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
int i = 0;
const list_t *list = h;

while (list != NULL)
{
if (list->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", list->len, list->str);
}
list = list->next;
i++;
}
return (i);
}
