#include <stdio.h>
/**
* main - Print a lowercase alphabet
*
* Description:The program uses putchar
* function to print a lowercase alphabet
* followed by a new line
*
* Return: 0
*/

int main(void)
{

int n;
char ch;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
