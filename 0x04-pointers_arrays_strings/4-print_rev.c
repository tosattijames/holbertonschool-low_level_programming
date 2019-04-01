#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int strLen;

	for (strLen = 0; s[strLen] != 0; strLen++)
		;
	strLen--;
	for (; strLen >= 0; strLen--)
		_putchar(s[strLen]);
	_putchar('\n');
}
