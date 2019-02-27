#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{

int x = 0;

while (s[x] != 0)
x++;
x = x - 1;
while (x >= 0)
{
_putchar(s[x]);
}
_putchar('\n');
}
