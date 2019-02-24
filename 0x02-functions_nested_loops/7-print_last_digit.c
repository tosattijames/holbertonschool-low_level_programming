#include "holberton.h"

/**
 * print_last_digit - prints last digit od a number
 *@n: input number
 *
 * Return: 0 = zero
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
n = -n;
_putchar(n + '0');
return (n);
}
