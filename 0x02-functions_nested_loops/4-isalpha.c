#include "holberton.h"

/**
* _int _isalpha - Checks if the passed character is alphabetic.
* @c: letter to be checked
*
* Return: 1 = alphabetic, 0 = non-alphabetic
*/

int _isalpha(int c)
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
