#include "holberton.h"
/**
 * squared - natural square root value
 * @total: max value
 * @i: multipling value
 * Return: square root
 */
int squared(int total, int i)
{
	if (i * i > total)
	{
		return (-1);
	}

	if (i * i == total)
	{
		return (i);

	}

	else
	{
		return (squared(total, i + 1));
	}
}
/**
 * _sqrt_recursion - natural square root value
 * @n: base value
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	return (squared(n, i));
}
