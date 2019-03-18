#include "function_pointers.h"

/**
 * print_name - Passes string to be printed
 * @name: Pointer to the strings to be printed
 * @f: Fuction pointer
 * Description: Print_name takes a string pointer
 * of char type then passes the string into the
 * calling function to be printer
 * Return: Void
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
return;
/** no input */
if (f == NULL)
return;
/** no input */
f(name);
/** pass name varible to function */
}
