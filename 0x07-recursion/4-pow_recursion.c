#include "holberton.h"

/**
 * _pow_recursion - raise x by the power of y
 * @x: base number
 * @y: raising value
 *
 * Return: -1 if y is less than 0, return
 * the value of x raised by y
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	else
	{
		return (1);

	}
}
