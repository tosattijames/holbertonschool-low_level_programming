#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: input string
 */

void rev_string(char *s)
{
	int index = 0;
	int  indexR, length, swap;

	if (s == NULL)
		return;

	while (s[index] != '\0')
	{
		index++;
	}

	length = index;

	for (index = 0, indexR = length - 1; indexR >= 0; index++, indexR--)
	{
		if ((index < indexR) && (*s != '\0'))
		{
			swap = s[index];
			s[index] = s[indexR];
			s[indexR] = swap;
		}
	}
}
