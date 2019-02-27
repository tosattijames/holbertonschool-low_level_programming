#include "holberton.h"
/**
 * _puts_recursion - prints a string
 *@s: string to print
 *Return: print string to output
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
}
