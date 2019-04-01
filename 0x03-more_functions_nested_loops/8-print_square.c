#include "holberton.h"

/**
 * print_square - prints the numbers, from 0 to 9, followed by a new line
 * @size: input numbera square
 * Return: Always 0.
 */
void print_square(int size)
{
	int rows, column;

	if (size <= 0)
		_putchar('\n');

	for (column = 0; column < size; column++)
	{
		for (rows = 0; rows < size; rows++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
