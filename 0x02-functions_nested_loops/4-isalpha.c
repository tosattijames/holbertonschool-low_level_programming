#include "holberton.h"

/**
 * _isalpha - Checks if the passed character is alphabetic.
 *
 * @c: character to be checked
 *
 * Return: 1 = alphabetic, 0 = non-alphabetic
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
