#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - adds a new node at the end of a list_t list
 * @head: - beginning of list
 * Return: Void
 */



void free_list(list_t *head)
{
list_t *ptr;

while (head != NULL)
{
ptr = head;
head = head->next;
free(ptr->str);
free(ptr);
}

}
