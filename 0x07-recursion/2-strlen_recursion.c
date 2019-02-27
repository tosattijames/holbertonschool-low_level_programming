#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 *@s: string input
 *Return: length of a string
 */
int _strlen_recursion(char *s)
{
int x = 0;

while (s[x] != '\0')
{
x++;
}
return (x);
}
