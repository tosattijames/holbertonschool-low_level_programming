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
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}
putchar('\n');
	return (0);
}
