#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be added into
 * @src: string to be copied
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
