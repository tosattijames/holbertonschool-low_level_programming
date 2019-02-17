#include <stdio.h>
/**
 *main - evaluate if the random integer
 *is 0, postive, or negative
 *
 *Description: evaluate if the random integer is a postive
 *number, negative number, or egual to zero.
 *
 *Return:0
 */
int main(void)
{
int a;
int b;

for (a = '0' ; a <= '9' ; a++)
{
for (b = '0' ; b <= '9' ; b++)
{
putchar(a);
putchar(b);
if (a < '9' || b < '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
