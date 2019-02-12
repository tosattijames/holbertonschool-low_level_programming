#include <stdlib.h>
#include <time.h>
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
int n;

srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * checks if the integer is less than 0.
	 */
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	/**
	 * checks if the integer is greater than 0.
	 */
		else if (n > 0)
	{
	 printf("%d is positive\n", n);
	}
	/**
	 * if both test are false
	 */
	else
	{
	printf("%d is zero\n ", n);
	}
	return (0);
}
