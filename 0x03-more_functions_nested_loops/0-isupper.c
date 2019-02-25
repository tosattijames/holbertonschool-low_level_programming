#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: input character
 *
 * Return: 1 = uppercase, 0 = lowercase
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
