#include "holberton.h"
/**
 * _strlen - Prints the length of a string.
 * @s: the  pointer used by the main function
 * Return: length of string s
 */
int _strlen(char *s)
{
int a;
a = 0;

while (s[a] != 0)
{
a++;
}
return (a);
}

