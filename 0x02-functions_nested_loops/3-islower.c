#include "holberton.h"

/**
 * _islower - Checks for lowercase characters
 * @c: letter to be checked
 *
 * Return: 1 =  lowercase, 0 = non-lowercase
 */

int _islower(int c)
{
if (c > 'a' && c < 'x')
{
return (1);
}
else
{
return (0);
}
}
