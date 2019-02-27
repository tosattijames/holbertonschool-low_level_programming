#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 *@s: string input
 *Return: length of a string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
}
