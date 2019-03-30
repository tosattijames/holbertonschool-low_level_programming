#include "holberton.h"
/**
 * print_binary - print binary number
 * @n: input number
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	unsigned long int counter = 0;
	unsigned long int result;
	int bit = 63;

	for (bit = 63; bit >= 0; bit--)
	{
		result = n >> 63;

		if (result & 1)
		{
			_putchar('1');
			counter++;
		}

		else
			_putchar('0');
	}
}
