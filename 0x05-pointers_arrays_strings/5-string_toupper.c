#include "holberton.h"

/**
 *string_toupper - lowercase to uppercase
 *@a: string to change case
 * Return: shanged string
 */

char *string_toupper(char *a)
{
	char *ptr = a;

	for (; *ptr != '\0'; ptr++)
	{
		if (*ptr >= 97 && *ptr <= 122)
		{
			*ptr = *ptr - 32;
		}
	}

	return (a);
}
