#include "holberton.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
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
