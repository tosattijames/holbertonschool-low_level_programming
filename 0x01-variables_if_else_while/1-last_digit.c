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
int i;

srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	/**
	* checks if the integer is less than 0.
	*/
	if (i == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, i);
	}
	/**
	* checks if the integer is greater than 0.
	*/
	else if (n > 0)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	/**
	* if both test are false
	*/
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
