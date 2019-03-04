#include "holberton.h"

/**
 * jack_bauer - print every minute from 00:00 to23:59.
 *
 * Return: 0 = zero
 */

void jack_bauer(void)
{
char num1, num2, num3, num4;

for (num1 = '0' ; num1 <= '2' ; num1++)
{
for (num2 = '0' ; num2 <= '3' ; num2++)
{
for (num3 = '0' ; num3 <= '5' ; num3++)
{
for (num4 = '0' ; num4 <= '9' ; num4++)
{
_putchar(num1);
_putchar(num2);
_putchar(':');
_putchar(num3);
_putchar(num4);
_putchar('\n');
}
}
}
}
_putchar('\n');
}
