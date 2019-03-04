#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
char num1;

for (num1 = '0' ; num1 <= '9' ; num1++)
{
_putchar(num1);
}
_putchar('\n');
}
