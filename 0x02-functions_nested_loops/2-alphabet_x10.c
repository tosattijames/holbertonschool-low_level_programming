#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * printing alphabet 10 times
 * Return: return 0
 */
void print_alphabet_x10(void)
{
char ch;
int x = 0;
while (x <= 9)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
x++;
putchar('\n');
}
}
