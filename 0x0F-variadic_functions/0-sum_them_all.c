#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: input number parameters to be pasted
 * Return: 0 If n == 0, total If n != 0
 */
int sum_them_all(const unsigned int n, ...)
{
int total = 0;
va_list arg_pointer;
unsigned int counter;

if (n == 0)
{
return (0);
}

va_start(arg_pointer, n);

for (counter = 0; counter < n; counter++)
{
total += va_arg(arg_pointer, unsigned int);
}
va_end(arg_pointer);

return (total);
}
