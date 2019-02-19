#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * printing alphabet 10 times
 */
void print_alphabet_x10(void)
{
char i = 0, l;

while (i <= 9)
{
l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
i++;
}

}
