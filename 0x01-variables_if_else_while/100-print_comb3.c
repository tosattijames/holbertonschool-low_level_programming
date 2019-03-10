#include <stdio.h>

/**
 * main - Print all possible different combinations of two digits.
 *
 * Description - Print all possible different combinations of
 *               two digits separated by ',', followed by a space. 01 and 10
 *               are considered the same combination of the two digits 0 and
 *               1 decimal values are used for the ',' and 'blank space'.
 * Return: 0
 */

int main(void)
{
int num1;
int num2;
int comma1 = 32;
int space1 = 44;
/** Digit One Loop */
for (num1 = '0' ; num1 <= '9' ; num1++)
{
/** Digit two Loop */
for (num2 = (num1 + 1) ; num2 <= '9' ; num2++)
{
/** Printing Agruements */
putchar(num1);
putchar(num2);
/** Formating Agruements */
if (num1 == '8' && num2 == '9')
{
putchar('\n');
}
else
{
putchar(space1);
putchar(comma1);
}
}
}
return (0);
}
