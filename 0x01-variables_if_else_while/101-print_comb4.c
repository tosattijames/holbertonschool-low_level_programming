#include <stdio.h>

/**
  * main - Print all possible different combinations of three digits.0
  * 102, 021, 201, 210  are considered the same combination of the three
  * digits 0, 1 and 2 decimal values are used for the ',' and 'blank space'.
  *Return: 0
*/

int main(void)
{
int num1;
int num2;
int num3;
int comma1 = 32;
int space1 = 44;

/** Digit One Loop */
for (num1 = '0' ; num1 <= '9' ; num1++)
{
/** Digit Two Loop */
for (num2 = (num1 + 1) ; num2 <= '9' ; num2++)
{
/** Digit Three Loop */
for (num3 = (num2 + 1) ; num3 <= '9' ; num3++)
{
/** Printing Agruements */
putchar(num1);
putchar(num2);
putchar(num3);
/** Formating Agruements */
if (num1 == '7' && num2 == '8' && num3 == '9')
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
}
return (0);
}
