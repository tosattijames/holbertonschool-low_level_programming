
#include "holberton.h"
/**
 *_strcmp - compare two strings
 *@s1: string one
 *@s2: string two
 * Return: result if true, ) if false
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
