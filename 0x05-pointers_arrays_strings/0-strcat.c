#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be added into
 * @src: string to be copied
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result  = dest;
	while (*result != '\0')
		result++;

	while (*src != '\0')
	{
		*result = *src;
		result++;
		src++;
	}
	return (result);
}
