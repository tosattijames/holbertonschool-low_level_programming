#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new
 * Return: 0
 */

void more_numbers(void)
{
	int rows, num1;

	for (rows = 1; rows <= 10; rows++)
	{
		for (num1 = 0; num1 <= 14; num1++)
		{
			if (num1 > 9)
			{
				_putchar ('0' + (num1 / 10));
			}
			_putchar('0' + (num1 % 10));
		}
		_putchar('\n');
	}

}
