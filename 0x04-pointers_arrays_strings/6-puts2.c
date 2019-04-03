#include "holberton.h"

/**
 * puts2 - print every other char
 * @str: input string
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
