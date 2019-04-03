#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to src
 * @src: input source
 * Return: result
 */
char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (result);
}
