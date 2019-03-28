#include "holberton.h"
/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: the string to print
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{


  unsigned int sum;


  if (b == NULL)
    return (0);

  while (*b != '\0')
	  sum = 2 * sum + (*b++ -'0');


  return(sum);
}
