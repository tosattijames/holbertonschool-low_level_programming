#include <stdio.h>
/**
 * main - Print all possible different combinations of four digits.
 * Decimal values are used for the ',' and 'blank space'.
 *Return: 0
 */
int main(void)
{
	int first, second;

	for (first = 0; first < 99; first++)
	{
		for (second = first + 1; second < 100; second++)
		{
			putchar(first / 10 + '0');
			putchar(first % 10 + '0');
			putchar(' ');
			putchar(second / 10 + '0');
			putchar(second % 10 + '0');

			if (first < 98 || second < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
