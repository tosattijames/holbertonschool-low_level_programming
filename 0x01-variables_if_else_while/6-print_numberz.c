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

	for (n = '0' ; n <= '9' ; n++)
	putchar(n);
	putchar('\n');
return (0);
}
