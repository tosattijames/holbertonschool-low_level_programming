#include "holberton.h"

/**
 * is_prime_number - determines prime number
 * @n: base value
  * Return: 1 for prime, 0 for false
 */

int is_prime_number(int n)
{
	int divide = 2;
	int last_digit = 10;

	if (n <= 1)
	{
		return (0);
	}
	else if (n > 5)
	{
		if ((n % last_digit) != 1
		    && (n % last_digit) != 3
		    && (n % last_digit) != 7
		    && (n % last_digit) != 9)
			return (0);
	}
	else if (divide * divide <= n)
	{
		if (n % divide == 0)
			return (0);
		else
			return (is_prime_number(n % (divide + 1)));
	}
	return (1);
}
