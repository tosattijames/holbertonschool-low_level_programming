#include <stdio.h>

/**
 * main - prints 1 - 9
 *
 * Description - print numbers 1 -9 separated by ,, followed by a space
 *               in ascending order. Decimal values are used for th ','
 *               and 'blanke space'.
 * Return: 0
 */

int main(void)
{
int num1;
int comma1 = 32;
int space1 = 44;

for (num1 = '0' ; num1 <= '9' ; num1++)
{
putchar(num1);
if (num1 != '9')
{
putchar(space1);
putchar(comma1);
}
}
putchar('\n');
return (0);
}
