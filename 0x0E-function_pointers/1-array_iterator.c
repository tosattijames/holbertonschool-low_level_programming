#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a parameter
 * @array:Pointer to the array of int to be passed
 * @size:Size of the array
 * @action:Function pointer passes a function as a parameter
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int counter;
int *arrayPtr = array;

if (array == NULL || size == 0 || action == 0)
return;

for (counter = 0; counter < size; counter++, arrayPtr++)
action(*arrayPtr);
}
