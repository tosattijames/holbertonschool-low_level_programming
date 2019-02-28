#include "holberton.h"
/**
 * factorial - Prints the factorial of a number.
 * @n: input number
 * Return: -1 is error, 1 is true
 */
int factorial(int n)
{
if (n >= 1)
{
return (n * factorial(n - 1));
}
else if (n < 0)
{
return (-1);
}
else
{
return (1);
}
}
