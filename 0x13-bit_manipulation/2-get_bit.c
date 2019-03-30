#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input number
 * @index: input index
 * Return: returns the number of bits
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	mask <<= index;

	if (n & mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
