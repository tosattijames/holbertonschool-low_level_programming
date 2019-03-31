#include "holberton.h"

/**
 * print_times_table - prints the nth times table, starting with 0
 * @n: input number
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int a, b, p;

	if (n > 15 || n < 0)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			p = (a * b);
			if (p <= 9)
			{
				_putchar('0' + p);
				if (b != n)
					_putchar(','), _putchar(' '), _putchar(' '), _putchar(' ');
			}
			if (p > 9 && p < 100)
			{
				_putchar('0' + (p / 10)), _putchar('0' + (p % 10));
				if (b != n)
					_putchar(','), _putchar(' '), _putchar(' ');
			}
			if (p >= 100)
			{
				_putchar('0' + (p / 100)), _putchar('0' + ((p / 10) % 10)), _putchar('0' + (p % 10));
				if (b != n)
					_putchar(','), _putchar(' ');
			}
		}
		_putchar('\n');
	}
}
