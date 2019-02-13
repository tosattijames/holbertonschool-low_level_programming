#include <stdio.h>
/**
* main - Print a lowercase alphabet
* a blank line
* Description:The program uses putchar
* function to print a lowercase alphabet
* followed by a new line
* a blank line
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 122; i > 96; --i)
	{
		putchar(i);
	}
putchar('\n');
return (0);
}
