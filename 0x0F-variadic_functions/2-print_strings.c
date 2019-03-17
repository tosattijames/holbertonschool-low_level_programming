#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints passed arguments
 * @separator: comma character
 * @n: number of arguments to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

unsigned int counter;

va_list args;

va_start(args, n);

for (counter = 0; counter < n; counter++)
{
unsigned int string = va_arg(args, unsigned int);

if (args != NULL)
{
printf("%s", string);

if (separator != NULL && counter < n - 1)
printf("%s", separator);
}
else
{
printf("nil");
}
}
printf("\n");
va_end(args);
}
