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

va_list args;

unsigned int counter;
char *temp;



va_start(args, n);
for (counter = 0; counter < n; counter++)
{
temp = va_arg(args, char*);

if (temp == NULL)
{
printf("(nil)");
}
else
{
printf("%s", temp);
if (separator != NULL && counter < n - 1)
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
