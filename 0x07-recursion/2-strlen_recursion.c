#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 *@s: string input
 *Return: length of a string
 */
int _strlen_recursion(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
