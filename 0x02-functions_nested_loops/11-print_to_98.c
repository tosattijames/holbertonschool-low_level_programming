#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n: input number
 * Return: 0.
 *
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			n++;
		}

		else if (n > 98)
		{
			n--;
			_putchar(',');
			_putchar(' ');
		}

		if (n / 10 < 1)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n / 100 < 1)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(n / 100 + '0');
			_putchar(n / 10 % 10 + '0');
			_putchar(n % 10 + '0');
                       _putchar(',');
                       _putchar(' ');
		}
	}

	_putchar('\n');
}
