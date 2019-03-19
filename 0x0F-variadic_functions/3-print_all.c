#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>




/**
 * print_char - prints a char
 * @ap: list of arguments
 * Return: none
 */
void print_char(va_list ap)
{
printf("%c", va_arg(ap, int));
}

/**
 * print_float - prints a float integer
 * @ap: list of arguments
 * Return: (void)
 */
void print_float(va_list ap)
{
printf("%f", va_arg(ap, double));
}

/**
 * print_int - prints an int
 * @ap: list of arguments
 * Return: (void)
 */
void  print_int(va_list ap)
{
printf("%d", va_arg(ap, int));
}

/**
 * print_string - prints a string
 * @ap: list of arguments
 * Return: (void)
 */
void print_string(va_list ap)
{
char *ptr_string;

ptr_string = (va_arg(ap, char*));
if (ptr_string == NULL)
{
ptr_string = "(nil)";
}
printf("%s", ptr_string);
}




/**
 * print_all - prints anything
 * @format: list of args passed to function
 * Return: (void)
 */


void print_all(const char * const format, ...)
{

op_t fun[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};

va_list args;

int counter1;
int counter2;
char *space = "";
char *sep = ",";

va_start(args, format);

counter1 = 0;
while (format[counter1] != '\0')
{
counter2 = 0;
while (fun[counter2].op != '\n')
{
if (format[counter1] == fun[counter2].op)
{
printf("%s", space);
fun[counter2].f(args);
space = sep;
}
counter2++;
}
counter1++;
}
va_end(args);
printf("\n");
}


