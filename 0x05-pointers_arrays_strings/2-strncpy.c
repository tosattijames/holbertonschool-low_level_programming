#include "holberton.h"
/**
 *_strncpy -copy a string
 *@dest: string recieving copy
 *@src: string to copy
 *@n: value to be copied
 * Return:copied string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[count] = src[count];
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
