#include "holberton.h"
/**
 * reverse_array - reverse array order
 * @a: array to reserse
 * @n: elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int src, dest;

	n = n - 1;

	for (src = 0; src < n; src++, n--)
	{
		dest = a[src];
		a[src] = a[n];
		a[n] = dest;
	}
}
