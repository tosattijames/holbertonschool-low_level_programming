#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints Fizz Buzz
 * Description: Prints 1 to 100. Multiples of three print Fizz
 * Multiples of five print Buzz. Multiples of both three
 * and five print FizzBuzz
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (((x % 5) == 0) && ((x % 3) == 0))
		{
			printf("FizzBuzz");
		}

		else if ((x % 5) == 0)
		{
			printf("Buzz");
		}

		else if ((x % 3) == 0)
		{
			printf("Fizz");
		}

		else
		{
			printf("%d", x);
		}

		if (x != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
