#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: input number
 *
 * Return: n = absolute value, 0 = zero
 */

int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (n * -1);
}
else
{
return (0);
}
}
