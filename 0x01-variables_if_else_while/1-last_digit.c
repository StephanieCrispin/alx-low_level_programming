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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    if (n % 10 < 6 && n != 0){
        printf("the string and is less than 6 and not 0\n");
    }else if (n % 10 == 0){
        printf("the string and is 0\n");
    }else if (n > 5){
        printf("the string and is geater than 5\n");
    }
	return (0);
}