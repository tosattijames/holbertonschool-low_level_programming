#include <stdio.h>
/**
 * main - Print all possible different combinations of four digits.
 * Decimal values are used for the ',' and 'blank space'.
 *Return: 0
 */
int main(void)
{
int num1;
int num2;
int num3;
int num4;
int comma1 = 44;
int space1 = 32;

/** Digit One Loop */
for (num1 = '0' ; num1 <= '9' ; num1++)
{
/** Digit Two Loop */
for (num2 = '0' ; num2 <= '9' ; num2++)
{
/** Digit Three Loop */
for (num3 = '0' ; num3 <= '9' ; num3++)
{
/** Digit Four Loop */
for (num4 = '1' ; num4 <= '9' ; num4++)
{
/** Formating Agruements */
putchar(num1);
putchar(num2);
putchar(space1);
putchar(num3);
putchar(num4);
if ((num1 == '9' && num2 == '8') && (num3 == '9' && num4 == '9'))
{
putchar('\n');
}
else
{
putchar(comma1);
putchar(space1);
}
}
}
}
}
return (0);
}
