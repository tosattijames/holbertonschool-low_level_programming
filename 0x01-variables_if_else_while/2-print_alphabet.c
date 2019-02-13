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
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
