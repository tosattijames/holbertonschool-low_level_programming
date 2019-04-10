
#include "holberton.h"
/**
 *_strcmp - compare two strings
 *@s1: string one
 *@s2: string two
 * Return: the return is an int
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	if (s1 != NULL || s2 != NULL)
	{
		result = *s1 - *s2;

		if (result != 0)
		{

		}

		s1++;
		s2++;
	}
	return (result);
}
