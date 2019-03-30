#include "holberton.h"
/**
 * clear_bit - clear bit to a given index
 * @n: pointer input number
 * @index: index of given bit to be  manipulated
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	if (n == NULL)
		return (-1);

	mask = mask << index;

	if ((*n & mask) != 0)
	{
		*n = *n ^ mask;
		return (1);
	}

	return (0);
}
