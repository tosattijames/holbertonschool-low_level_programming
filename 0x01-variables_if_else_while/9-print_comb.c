#include <stdio.h>
/**
* main - Print the lowercase alphabet.
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
int b = 32;
int c = 44;
int d = 36;

for (n = '0' ; n <= '9' ; n++)
{
putchar(n);
if (n != '9')
{
putchar(c);
putchar(b);
}
}
putchar(d);
return (0);
}
