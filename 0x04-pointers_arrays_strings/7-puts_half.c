#include "holberton.h"

/**
 * puts_half - print every other number
 * @str: input string
 */

void puts_half(char *str)
{
	char *half;
	int mid;
	int len = 0;

	while (str[len] != '\0')
		len++;

	mid = (len + 1) / 2;

	half = str + mid;
	while (*half != '\0')
	{
		_putchar(*half);
		half++;
	}
	_putchar('\n');
}
