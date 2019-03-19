#include "function_pointers.h"

/**
 * int_index - Searches an array for an integer
 * @array:Pointer to the array to be searched
 * @size:Size of the array
 * @cmp:Function pointer that refernces the
 * search function.
 * Return: 0 if true, -1 if no match or if
 * size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int counter;

if (array == NULL || cmp == NULL || size < 0)
{
return (-1);
}
for (counter = 0; counter < size; counter++)
{
if (cmp(array[counter]) != '\0')
return (counter);
}
return (-1);
}
