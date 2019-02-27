#include "holberton.h"
/**
 * _puts_recursion - prints a string
 *@s: string to print
 *Return: print string to output
 */
void _puts_recursion(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}
