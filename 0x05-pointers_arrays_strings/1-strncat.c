#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be added into
 * @src: string to be copied
 * @n: number of characters to be copied
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		;
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		if (y < n)
		{
			dest[x + y] = src[y];
		}
	}
	return (dest);
}
