#include "holberton.h"
/**
 * _puts - prints a string*
 *@str: string to print
 *Return: print string to output
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
