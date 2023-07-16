#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: A C program that prints the postivity or negativity of a number
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) == 0)
	{
		k = n % 10;
		printf("Last digit of %d is %d and is 0\n", n, k);
	} else if ((n % 10) < 6 && n != 0)
	{
		k = n % 10;
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
	} else if ((n % 10) > 5)
	{
		k = n % 10;
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	}
	return (0);
}
