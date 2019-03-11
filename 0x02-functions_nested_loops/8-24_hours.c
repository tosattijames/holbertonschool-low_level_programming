#include "holberton.h"
/**
 * jack_bauer - prints starting from 00:00 to 23:59
 *
 * Return: 0.
 *
 *
*/
void jack_bauer(void)
{
int num1;
int num2;
int num3;
int num4;

for (num1 = '0' ; num1 <= '2' ; num1++) /** Digit One Loop */
{
for (num2 = '0' ; num2 <= '4' ; num2++) /** Digit Two Loop */
{
for (num3 = '0' ; num3 <= '5' ; num3++) /** Digit Three Loop */
{
for (num4 = '0' ; num4 <= '9' ; num4++) /** Digit Four Loop */
{
_putchar(num1); /** Formating Agruements */
_putchar(num2);
_putchar(':');
_putchar(num3);
_putchar(num4);
if ((num1 == '2' && num2 == '3') && (num3 == '5' && num4 == '9'))
{
_putchar('\n');
}
else
{
_putchar('\n');
}
}
}
}
}
}
