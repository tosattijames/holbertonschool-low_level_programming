#include "holberton.h"
/**
 * jack_bauer - prints from 00:00 to 23:59
 *
 * Return: 0.
 *
 *
*/
void jack_bauer(void)
{
int num1, num2, num3, num4;
/** Digit One Loop */
for (num1 = '0' ; num1 <= '2' ; num1++)
{
/** Digit Two Loop */
for (num2 = '0' ; num2 <= '4' ; num2++)
{
/** Digit Three Loop */
for (num3 = '0' ; num3 <= '5' ; num3++)
{
/** Digit Three Loop */
for (num4 = '0' ; num4 <= '9' ; num4++)
{
/** Printing Agruements */
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

}
