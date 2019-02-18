#include <stdio.h>
#include "holberton.h"

/**
 * main - Print Holberton.
 *
 * Description:The program uses putchar
 * function to print a lowercase alphabet
 * excluding q abd e followed by a new line.
 *
 * Return: 0
 */

int main(void)
{

int n;
char string[9] = "Holberton";

for (n = '0'; n <= '9'; n++)
{
_putchar(string[n]);
}
_putchar('\n');
return (0);
}
