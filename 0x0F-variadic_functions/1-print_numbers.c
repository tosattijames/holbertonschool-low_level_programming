#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints passed arguments
 * @separator: comma character
 * @n: number of arguments to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int counter;

va_list args;

va_start(args, n);

for (counter = 0; counter < n; counter++)
{
unsigned int value = va_arg(args, unsigned int);
printf("%d", value);

if (separator != NULL && counter < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
