#include "holberton.h"
/**
 * jack_bauer - prints from 00:00 to 23:59
 *
 * Return: 0.
 *
 *
*/
void jack_bauer(void)
{
	int num1, num2;

	for (num1 = 0 ; num1 <= 23 ; num1++)  /** Digit One Loop */
	{
		for (num2 = 0 ; num2 <= 59 ; num2++)
		{
			_putchar('0' + (num1 / 10)); /** Printing Agruements */
			_putchar('0' + (num1 % 10));
			_putchar(':');
			_putchar('0' + (num2 / 10));
			_putchar('0' + (num2 % 10));
			_putchar('\n');
		}
	}
}
