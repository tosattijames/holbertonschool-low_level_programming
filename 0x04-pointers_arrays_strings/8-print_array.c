#include "holberton.h"

/**
 * print_array - print n elements
 * @a: input array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int indx = 0;

	for (indx = 0; indx < n; indx++)
	{
		printf("%d", a[indx]);

		if (indx < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
