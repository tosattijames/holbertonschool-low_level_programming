
#include "holberton.h"
/**
 * swap_int  - Switch the values between a & c
 * @a: pointer to a
 * @b: pointer to b
 * Return: void
 */
void swap_int(int *a, int *b)
{
int x = *b;
int y = *a;

*a = x;
*b = y;
}
