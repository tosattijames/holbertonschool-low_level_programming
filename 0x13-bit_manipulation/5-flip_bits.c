#include "holberton.h"

/**
 * flip_bits - flip bits
 * @n: input number
 * @m: input number
 * Return: returns the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0;
	unsigned long int mask;

	mask = n ^ m;
	while (mask > 0)
	{
		if (mask & 1)
			counter++;

		mask >>= 1;
	}
	return (counter);
}
