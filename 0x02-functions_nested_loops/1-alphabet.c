#include "holberton.h"

/**
 * void print_alphabet - Print lowercase alphabet
 *
 * Return: print to stdout the lowecase alphabet followed by a new line
 */
void print_alphabet(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
