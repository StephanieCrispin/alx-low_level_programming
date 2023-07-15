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
    if(n > 0){
        printf("%ld is positive",n);
    }else if(n == 0){
        printf("%ld is 0",n);
    }else{
        printf("%ld is negative",n);
    }
	return (0);
}