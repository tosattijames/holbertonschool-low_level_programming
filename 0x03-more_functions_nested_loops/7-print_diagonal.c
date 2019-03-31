#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: input number
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int space, row;

	if (n <= 0)
		_putchar('\n');

	for (row = 0; row < n; row++)
	{
		for (space = 0; space < row; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
