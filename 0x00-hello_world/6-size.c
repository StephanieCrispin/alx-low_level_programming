#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints different data types
 *
 * Return: Always 0 (Success)
*
*/

int main(void)
{
    char a = 'a';
    printf("Size of a char: %ld byte(s)\n", sizeof(a));
    printf("Size of an int: %d byte(s)\n", sizeof(int));
    printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
    printf("Size of a float: %ld byte(s)\n", sizeof(float));
    return (0);
    }