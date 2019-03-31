
#include "holberton.h"

/**
 * print_line - prints a line
 * @n: input number
 * Return: Always 0.
 */

void print_line(int n)
{
	int space;

	if (n <= 0)
		_putchar('\n');

	for (space = 1; space < n; space++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
