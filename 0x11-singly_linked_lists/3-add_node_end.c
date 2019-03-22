#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @str: pointer to string
 * @head: - beginning of list
 * Return: Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int i;
list_t *new;

new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);
new->str = strdup(str);

if (new->str != '\0')
{
for (i = 0; new->str[i] != '\0'; i++)
{
;
}
}
new->len = i;
new->next = NULL;
*head = new;
return (new);
}
