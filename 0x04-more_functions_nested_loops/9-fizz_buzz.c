#include "stdio.h"

/**
 * main - Entry point
 *
 * Description: A c program that prints out fizz buzz
 *
 * Return: Always 0 success
 */

int main(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (!(i % 3 == 0) && !(i % 5 == 0) && !(i % 5 == 0 && i % 3 == 0))
        {
            printf("%d ", i);
        }
        if (i % 15 == 0)
            printf("FizzBuzz ");
        if (i % 5 == 0 && i % 15 != 0)
            printf("Buzz ");
        if (i % 3 == 0 && i % 15 != 0)
            printf("Fizz ");
    }
    printf("\n");
    return (0);
}