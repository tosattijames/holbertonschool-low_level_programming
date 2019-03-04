#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, 01356789, followed by a new line
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
int num;

for  (num = '0' ; num <= '9' ; num++)
{
if ((num != '2') && (num != '4'))
{
_putchar(num);
}
}
_putchar('\n');
}
